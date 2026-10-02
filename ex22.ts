function calcularTotal(preco: number, quantidade: number): number {
    return preco * quantidade;
}

const produto: string = "Teclado";
const preco: number = 80;
const quantidade: number = 2;
const total: number = calcularTotal(preco, quantidade);

console.log(`Produto: ${produto}`);
console.log(`Quantidade: ${quantidade}`);
console.log(`Total: R$ ${total.toFixed(2)}`);
