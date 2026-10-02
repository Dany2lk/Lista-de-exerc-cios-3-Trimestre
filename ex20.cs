using System;

Console.Write("Quantidade no estoque: ");
int quantidade = int.Parse(Console.ReadLine() ?? "0");

if (quantidade < 0) {
    Console.WriteLine("Quantidade inválida.");
} else if (quantidade == 0) {
    Console.WriteLine("Produto esgotado.");
} else if (quantidade <= 5) {
    Console.WriteLine("Estoque baixo.");
} else {
    Console.WriteLine("Estoque disponível.");
}


