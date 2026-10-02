fun main() {
    print("Nome: ")
    val nome = readln()
    print("Idade: ")
    val idade = readln().toInt()

    if (idade < 0) {
        println("Idade inválida.")
    } else if (idade >= 18) {
        println("$nome é maior de idade.")
    } else {
        println("$nome é menor de idade.")
    }
}
