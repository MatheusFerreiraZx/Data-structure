package lasagna

const OvenTime = 40

func RemainingOvenTime(time int) int {
	return OvenTime - time
}

func PreparationTime(numberOfLayers int) int {
	return numberOfLayers * 2
}

func ElapsedTime(numberOfLayers, time int) int {
	return PreparationTime(numberOfLayers) + time
}
