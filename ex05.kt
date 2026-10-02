fun main() {
    print("Digite um número inteiro: ")
    val numero = readln().toInt()

    println("TABUADA DO $numero")
    for (multiplicador in 1..10) {
        val resultado = numero * multiplicador
        println("$numero x $multiplicador = $resultado")
    }
}

