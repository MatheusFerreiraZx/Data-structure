import Foundation
import FoundationNetworking

struct FoodOutlet: Decodable {
    let name: String
    let estimated_cost: Int
}

struct FoodOutletsResponse: Decodable {
    let data: [FoodOutlet]
    let total_pages: Int
}

class Result {
    
    private static let RESTURL = "https://jsonmock.hackerrank.com/api/food_outlets"
    
    static func getRelevantFoodOutlets(city: String, maxCost: Int) throws -> [String] {
        var page = 1
        var cityList: [String] = []
        
        repeat {
            do {
                let response = try getResponsePerPage(url: RESTURL, city: city, page: page)
                let jsonResponse = try JSONDecoder().decode(FoodOutletsResponse.self, from: response)
                
                for outlet in jsonResponse.data {
                    if outlet.estimated_cost <= maxCost {
                        cityList.append(outlet.name)
                    }
                }
                
                page += 1
            } catch {
                print("Error fetching data: \(error)")
                break
            }
        } while page <= 10 // Assuming a maximum of 10 pages to avoid infinite loops
        
        return cityList
    }
    
    static func getResponsePerPage(url: String, city: String, page: Int) throws -> Data {
        let urlString = "\(url)?city=\(city)&page=\(page)"
        guard let url = URL(string: urlString) else {
            throw NSError(domain: "Invalid URL", code: 0, userInfo: nil)
        }
        
        var request = URLRequest(url: url)
        request.httpMethod = "GET"
        request.addValue("application/json", forHTTPHeaderField: "Content-Type")
        
        let (data, response, error) = synchronousDataTask(with: request)
        
        if let error = error {
            throw error
        }
        
        guard let httpResponse = response as? HTTPURLResponse, (200..<300).contains(httpResponse.statusCode) else {
            throw NSError(domain: "HTTP Error", code: 0, userInfo: nil)
        }
        
        return data ?? Data()
    }
    
    static func synchronousDataTask(with request: URLRequest) -> (Data?, URLResponse?, Error?) {
        var data: Data?
        var response: URLResponse?
        var error: Error?
        
        let semaphore = DispatchSemaphore(value: 0)
        
        let task = URLSession.shared.dataTask(with: request) { responseData, urlResponse, taskError in
            data = responseData
            response = urlResponse
            error = taskError
            semaphore.signal()
        }
        
        task.resume()
        semaphore.wait()
        
        return (data, response, error)
    }
}

func main() {
    guard let city = readLine(), !city.isEmpty else { return }
    guard let maxCostStr = readLine(), let maxCost = Int(maxCostStr.trimmingCharacters(in: .whitespacesAndNewlines)) else { return }
    
    do {
        let result = try Result.getRelevantFoodOutlets(city: city, maxCost: maxCost)
        for outlet in result {
            print(outlet)
        }
    } catch {
        print("Error: \(error)")
    }
}

main()
