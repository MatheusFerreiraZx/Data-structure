import Foundation

func minChairs(simulations: [String]) -> [Int] {
    var results: [Int] = []
    
    for simulation in simulations {
        var currentChairs = 0
        var maxChairs = 0
        var currentEmployees = 0
        
        for event in simulation {
            switch event {
                case "C":
                    currentEmployees += 1
                    maxChairs = max(maxChairs, currentEmployees)
                case "R":
                    if currentEmployees > 0 {
                        currentEmployees -= 1
                    }
                case "U":
                if currentEmployees < currentChairs {
                    currentChairs += 1
                    // availableChairs += 1
                } else {
                    currentChairs += 1
                    currentEmployees += 1
                    maxChairs = max(maxChairs, currentEmployees)
                }
                case "L":
                if currentEmployees > 0 {
                    currentEmployees -= 1
                }
                default:
                break
            }
        }
        
        results.append(maxChairs)
    }
    
    return results
}

let inputSimulations = [
    "CRCCCLLULCRUCCLCRUCRCCRCCCLCLURLRRCRUCCRCLCLLUCULU",
    "CRCRCRUUUCRCRUCCURRCCUCRCCUULLRURCR",
    "CLCCRUCCCCRURCRRCRLLCUUUCLRCLCRCCLCRRCRCCRRCRUUCCRULCLCCCLLLCCLRCUUUUCRCRULCLCULCUCLRCULUCCCRULU",
    "CCRRCUCCLCUCCRLUR",
    "CLCCRRCRCLCULUUCLCLCRCURCLCCRUUR",
    "CCCRRUCLLCCUCCRRUCUCRRURLCCLRCLCRCCULCRCRRUCRCUCCLRUUCCRCCCRRLUL",
    "CRCRCRCRCRCRCR",
    "CRCLCURCURCLCRCLCCRLUCLCRCLCCLRCULUCRCRCLCULCRCLCLCRCUUUURCUURCLUC",
    "CLCLCLCLCLCLCLCLCLCL",
    "CLCRCRCULCCR",
    "CRCURCRUCRCRCUURUCRCLCRCULCLCUURCCCURRLUCRCCCURURLCUCR",
    "CRUCLCCRRCRCURCLCCRLUCRCLCRUCUUULCLCRCRCLUUCCCURCCCURRCRR",
    "CRCUR",
    "CRCR",
    "CRCLUCCLRCLCLCCURURCCURCRLUCCCULRUCLRCCCLLLCCLURCLCRCULCRCLCRCUCRCLLCLCLCCLCLRCUUURCLUUCCLCRCCRRCUCC",
    "CCRURUCLCLCLCCLRUCRUCCLRCURCLCLCLUCRCRCRCCUUCRUCCCURCLCLRRLUUCRRCURCCUUCULCCCRCCURURRURURCLCCCL",
    "CRCCCURRRUCLUCURCRUCURUCRCLCCRCRRCLCUUURCUULCLCRUCCRLUCRCURCRUCLUCRUCLCLCRCULCLCRCCRRCLCRCLCCRC",
    "CCCRLUCRRCURCRUCUCCCRURCCCRCCLLCLLRRLCCULCCCRCCCCRCRCLLRLURLRUCCRCRULCUCRUCLURUCLUCLCUUULCLCUCC",
    "CLCLCLCLCLCLCL",
    "CRCCCUCLRURCLRCRUUCRUUCRUCLCRCUCCR"
]
let outputResult = minChairs(simulations: inputSimulations)
print(outputResult)