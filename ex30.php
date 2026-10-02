<?php
echo "Cliente: ";
$cliente = trim(fgets(STDIN));
echo "Produto: ";
$produto = trim(fgets(STDIN));
echo "Preço unitário: ";
$preco = (float) trim(fgets(STDIN));
echo "Quantidade: ";
$quantidade = (int) trim(fgets(STDIN));

if ($cliente === '' || $produto === '' || $preco < 0 || $quantidade <= 0) {
    echo "Dados inválidos.\n";
    exit;
}

$total = $preco * $quantidade;
echo "===== RECIBO =====\n";
echo "Cliente: $cliente\nProduto: $produto\n";
echo "Quantidade: $quantidade\n";
echo "Total: R$ " . number_format($total, 2, ',', '.') . "\n";
