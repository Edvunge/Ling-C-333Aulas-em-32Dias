-- 01. Crie um banco de dados
CREATE DATABASE banco;

-- 02. Crie a tabela com a estrutura
CREATE TABLE `info` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(32) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8mb3 COLLATE=utf8mb3_general_ci;

-- 03. Insira alguns dados, exemplo:
INSERT INTO info VALUES(NULL,'Dennis Ritchie');
