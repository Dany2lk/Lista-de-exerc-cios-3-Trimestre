<?php
echo "Nota final (0 a 10): ";
$nota = (float) trim(fgets(STDIN));

if ($nota < 0 || $nota > 10) {
    echo "Nota inválida.\n";
} elseif ($nota >= 6) {
    echo "Aprovado!\n";
} else {
    echo "Em recuperação.\n";
}

