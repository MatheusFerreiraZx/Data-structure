package lasagna

const OvenTime = 40

func RemainingOvenTime(time int) int {
	return OvenTime - time
}

func PreparationTime(layers int) int {
	return layers * 2
}

func ElapsedTime(layers, time int) int {
	return PreparationTime(layers) + time
}
