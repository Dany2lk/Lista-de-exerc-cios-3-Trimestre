-- Execute primeiro: cria a tabela que será usada em 25 e 26.
CREATE TABLE IF NOT EXISTS alunos (
    id INTEGER PRIMARY KEY,
    nome TEXT NOT NULL,
    turma TEXT NOT NULL,
    nota REAL NOT NULL CHECK (nota BETWEEN 0 AND 10)
);
