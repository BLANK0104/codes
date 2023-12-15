import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    var num1: Double
    var num2: Double
    var result: Double
    var operator: String

    println("Enter the first number: ")
    num1 = scanner.nextDouble()

    println("Enter an operator (+, -, *, /): ")
    operator = scanner.next()

    println("Enter the second number: ")
    num2 = scanner.nextDouble()

    result = when (operator) {
        "+" -> num1 + num2
        "-" -> num1 - num2
        "*" -> num1 * num2
        "/" -> num1 / num2
        else -> {
            println("Invalid operator")
            return
        }
    }

    println("Result: $result")
}
