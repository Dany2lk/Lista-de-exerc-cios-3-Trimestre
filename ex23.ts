type Produto = { nome: string; preco: number; estoque: number };

const produtos: Produto[] = [
    { nome: "Mouse", preco: 50, estoque: 3 },
    { nome: "Teclado", preco: 90, estoque: 0 },
    { nome: "Cabo USB", preco: 20, estoque: 8 }
];

console.log("PRODUTOS DISPONÍVEIS");

for (const produto of produtos) {
    if (produto.estoque > 0) {
        console.log(`${produto.nome} - R$ ${produto.preco.toFixed(2)}`);
    }
}



