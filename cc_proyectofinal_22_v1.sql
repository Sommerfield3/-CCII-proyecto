-- --------------------------------------------------------
-- Host:                         localhost
-- Versión del servidor:         10.6.8-MariaDB - mariadb.org binary distribution
-- SO del servidor:              Win64
-- HeidiSQL Versión:             11.3.0.6295
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Volcando estructura de base de datos para cc_proyectofinal_22
CREATE DATABASE IF NOT EXISTS `cc_proyectofinal_22` /*!40100 DEFAULT CHARACTER SET utf8mb3 */;
USE `cc_proyectofinal_22`;

-- Volcando estructura para tabla cc_proyectofinal_22.administrador
CREATE TABLE IF NOT EXISTS `administrador` (
  `codigoadm` varchar(10) NOT NULL DEFAULT '',
  `nombre` text NOT NULL,
  `edad` int(11) NOT NULL,
  `DNI` tinytext NOT NULL,
  `direccion` text NOT NULL,
  `telefono` tinytext NOT NULL,
  `email` tinytext NOT NULL,
  `ciudad` tinytext NOT NULL,
  `clave` varchar(50) NOT NULL DEFAULT '',
  PRIMARY KEY (`codigoadm`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;

-- Volcando datos para la tabla cc_proyectofinal_22.administrador: ~2 rows (aproximadamente)
/*!40000 ALTER TABLE `administrador` DISABLE KEYS */;
INSERT INTO `administrador` (`codigoadm`, `nombre`, `edad`, `DNI`, `direccion`, `telefono`, `email`, `ciudad`, `clave`) VALUES
	('acc_proyectofinal_22_v1cc_proyectofinal_22_v1syssyscc_proyectofinal_22_v1cc_proyectofinal_22_v1administradoradministradormedicoadministradorcc_proyectofinal_22administradoradministradordm2019001', 'ALVARO HENRY MAMANI ALIAGA', 25, '12345678', 'Av. TodosAprobados 2020 - Villa Bondad', '987654321', 'elmejorprofe777@gmail.com', 'Esperanza', 'e10adc3949ba59abbe56e057f20f883e'),
	('adm2022002', 'ENZO EDIR VELASQUEZ LOBATON', 24, '87654321', 'Calle TheBest 2020 - Urbanización Misericordia', '123456789', 'evelasquezl@unsa.edu.pe', 'Victoria', 'e10adc3949ba59abbe56e057f20f883e');
/*!40000 ALTER TABLE `administrador` ENABLE KEYS */;

-- Volcando estructura para tabla cc_proyectofinal_22.med2020001_citas_05_07_2022
CREATE TABLE IF NOT EXISTS `med2020001_citas_05_07_2022` (
  `orden` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `hora` time NOT NULL,
  `codpac` varchar(10) DEFAULT NULL,
  `nombre` text NOT NULL,
  `direccion` text NOT NULL,
  `telefono` tinytext NOT NULL,
  `sesion` int(11) NOT NULL,
  PRIMARY KEY (`orden`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;

-- Volcando datos para la tabla cc_proyectofinal_22.med2020001_citas_05_07_2022: ~0 rows (aproximadamente)
/*!40000 ALTER TABLE `med2020001_citas_05_07_2022` DISABLE KEYS */;
/*!40000 ALTER TABLE `med2020001_citas_05_07_2022` ENABLE KEYS */;

-- Volcando estructura para tabla cc_proyectofinal_22.medico
CREATE TABLE IF NOT EXISTS `medico` (
  `codigomed` varchar(10) NOT NULL DEFAULT '',
  `nombre` text NOT NULL,
  `edad` int(3) NOT NULL,
  `DNI` tinytext NOT NULL,
  `especialidad` tinytext NOT NULL,
  `direccion` text NOT NULL,
  `telefono` tinytext NOT NULL,
  `email` tinytext NOT NULL,
  `ciudad` tinytext NOT NULL,
  `clave` varchar(50) NOT NULL DEFAULT '',
  `turno` char(1) NOT NULL,
  PRIMARY KEY (`codigomed`) USING BTREE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;

-- Volcando datos para la tabla cc_proyectofinal_22.medico: ~0 rows (aproximadamente)
/*!40000 ALTER TABLE `medico` DISABLE KEYS */;
INSERT INTO `medico` (`codigomed`, `nombre`, `edad`, `DNI`, `especialidad`, `direccion`, `telefono`, `email`, `ciudad`, `clave`, `turno`) VALUES
	('med2020001', 'ALEJANDRO SANDRO LINARES SUAREZ', 30, '11111111', 'PEDIATRÍA', 'Calle Normal 666 - Villa Regular', '999999999', 'emailexample@gmail.com', 'Arequipa', 'e10adc3949ba59abbe56e057f20f883e', 'M');
/*!40000 ALTER TABLE `medico` ENABLE KEYS */;

-- Volcando estructura para tabla cc_proyectofinal_22.pac2021001_citas
CREATE TABLE IF NOT EXISTS `pac2021001_citas` (
  `fecha` date NOT NULL,
  `especialidad` tinytext NOT NULL,
  `nombremed` text NOT NULL,
  `hora` time NOT NULL,
  `tratamiento` text NOT NULL,
  `diagnostico` text NOT NULL,
  `sesion` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;

-- Volcando datos para la tabla cc_proyectofinal_22.pac2021001_citas: ~0 rows (aproximadamente)
/*!40000 ALTER TABLE `pac2021001_citas` DISABLE KEYS */;
/*!40000 ALTER TABLE `pac2021001_citas` ENABLE KEYS */;

-- Volcando estructura para tabla cc_proyectofinal_22.paciente
CREATE TABLE IF NOT EXISTS `paciente` (
  `codigopac` varchar(10) NOT NULL DEFAULT '',
  `nombre` text NOT NULL,
  `edad` int(11) NOT NULL,
  `DNI` tinytext NOT NULL,
  `direccion` text NOT NULL,
  `telefono` tinytext NOT NULL,
  `email` tinytext NOT NULL,
  `ciudad` tinytext NOT NULL,
  `clave` varchar(50) NOT NULL DEFAULT '',
  PRIMARY KEY (`codigopac`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;

-- Volcando datos para la tabla cc_proyectofinal_22.paciente: ~1 rows (aproximadamente)
/*!40000 ALTER TABLE `paciente` DISABLE KEYS */;
INSERT INTO `paciente` (`codigopac`, `nombre`, `edad`, `DNI`, `direccion`, `telefono`, `email`, `ciudad`, `clave`) VALUES
	('pac2021001', 'LINGHAI JOAQUIN ZHONG CALLASI', 19, '456123789', 'Av. Forgotten - Urbanización Alight', '911911911', 'emailexample@gmail.com', 'Arequipa', 'e10adc3949ba59abbe56e057f20f883e');
/*!40000 ALTER TABLE `paciente` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
cc_proyectofinal_22_v1cc_proyectofinal_22_v1cc_proyectofinal_22_v1