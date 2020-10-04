// Calculating Trapezoid area

float trapezoid_area(float base, float base2, float h) {
	return (base + base2) * h / 2;
}


int main() {
	printf("Trapezoid Area: %f", trapezoid_area(10, 20, 10));
}
