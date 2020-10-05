

public class FizzBuzz {

	public static void main(String... args) {
		int number = Integer.valueOf(args[0]);

		boolean divisibleByThree = number % 3 == 0,
				divisibleByFive = number % 5 == 0,
				divisibleByBoth = divisibleByThree &&  divisibleByFive;

		var answer = divisibleByBoth ? "FizzBuzz" :
					 divisibleByThree ? "Fizz" :
					 divisibleByFive ? "Buzz" : number;

		System.out.println(answer);
	}

}
