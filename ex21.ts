const nome: string = "Ana";
const idade: number = 17;
const estudante: boolean = true;

console.log("APRESENTAÇÃO DE USUÁRIO");
console.log(`Nome: ${nome}`);
console.log(`Idade: ${idade}`);
console.log(`Estudante: ${estudante ? "Sim" : "Não"}`);

ex22.ts

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


