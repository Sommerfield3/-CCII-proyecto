-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 19-08-2022 a las 19:30:01
-- Versión del servidor: 10.4.24-MariaDB
-- Versión de PHP: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `cc_proyectofinal_22`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `administrador`
--

CREATE TABLE `administrador` (
  `codigoadm` int(10) NOT NULL,
  `nombre` mediumtext COLLATE utf32_spanish_ci NOT NULL,
  `edad` int(11) NOT NULL,
  `DNI` text COLLATE utf32_spanish_ci NOT NULL,
  `direccion` mediumtext COLLATE utf32_spanish_ci NOT NULL,
  `telefono` text COLLATE utf32_spanish_ci NOT NULL,
  `email` text COLLATE utf32_spanish_ci NOT NULL,
  `ciudad` text COLLATE utf32_spanish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf32 COLLATE=utf32_spanish_ci;

--
-- Volcado de datos para la tabla `administrador`
--

INSERT INTO `administrador` (`codigoadm`, `nombre`, `edad`, `DNI`, `direccion`, `telefono`, `email`, `ciudad`) VALUES
(1, 'ALVARO HENRY MAMANI ALIAGA', 25, '12345678', 'Av. TodosAprobados 2020 - Villa Bondad', '987654321', 'elmejorprofe777@gmail.com', 'Esperanza'),
(2, 'ENZO EDIR VELASQUEZ LOBATON', 24, '87654321', 'Calle TheBest 2020 - Urbanización Misericordia', '123456789', 'evelasquezl@unsa.edu.pe', 'Victoria');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `citas`
--

CREATE TABLE `citas` (
  `idcita` int(10) NOT NULL COMMENT 'id de la cita',
  `codigopac` int(10) NOT NULL,
  `codigomed` int(10) NOT NULL,
  `turno` varchar(1) COLLATE utf8_spanish_ci NOT NULL COMMENT 'M = mañana, T = tarde, N = Noche\r\n',
  `fecha` date NOT NULL COMMENT 'Fecha de la cita',
  `hora` time NOT NULL COMMENT 'hora de la cita\r\n',
  `estado` tinyint(4) NOT NULL DEFAULT 2 COMMENT '0 = anulado, 1 = atendido, 2 = en espera'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

--
-- Volcado de datos para la tabla `citas`
--

INSERT INTO `citas` (`idcita`, `codigopac`, `codigomed`, `turno`, `fecha`, `hora`, `estado`) VALUES
(2, 4, 1, 'M', '2022-08-01', '08:00:00', 1),
(3, 1, 4, 'M', '2022-08-17', '08:30:00', 2),
(4, 2, 4, 'M', '2022-08-01', '09:00:00', 2),
(5, 3, 4, 'M', '2022-08-01', '10:00:00', 2),
(8, 5, 2, 'T', '2022-08-15', '12:30:00', 2),
(9, 6, 2, 'T', '2022-08-15', '13:00:00', 2),
(10, 7, 10, 'N', '2022-08-17', '20:00:00', 2),
(11, 8, 1, 'T', '2022-08-01', '14:00:00', 1),
(12, 9, 1, 'N', '2022-08-01', '18:00:00', 1),
(13, 1, 1, 'M', '2022-08-18', '09:00:00', 2),
(14, 3, 1, 'T', '2022-08-18', '15:00:00', 2),
(15, 2, 1, 'N', '2022-08-18', '19:00:00', 2),
(16, 3, 9, 'T', '2022-08-18', '00:00:00', 2);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `medico`
--

CREATE TABLE `medico` (
  `codigomed` int(10) NOT NULL,
  `nombre` mediumtext COLLATE utf32_spanish_ci NOT NULL,
  `edad` int(3) NOT NULL,
  `DNI` text COLLATE utf32_spanish_ci NOT NULL,
  `especialidad` text COLLATE utf32_spanish_ci NOT NULL,
  `direccion` mediumtext COLLATE utf32_spanish_ci NOT NULL,
  `telefono` text COLLATE utf32_spanish_ci NOT NULL,
  `email` text COLLATE utf32_spanish_ci NOT NULL,
  `ciudad` text COLLATE utf32_spanish_ci NOT NULL,
  `turno` char(1) COLLATE utf32_spanish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf32 COLLATE=utf32_spanish_ci;

--
-- Volcado de datos para la tabla `medico`
--

INSERT INTO `medico` (`codigomed`, `nombre`, `edad`, `DNI`, `especialidad`, `direccion`, `telefono`, `email`, `ciudad`, `turno`) VALUES
(1, 'ALEJANDRO SANDRO LINARES SUAREZ', 30, '11111111', 'PEDIATRÍA', 'Calle Normal 666 - Villa Regular', '999999999', 'emailexample@gmail.com', 'Arequipa', 'M'),
(2, 'JORGE SUAREZ', 30, '111111111', 'Pediatría', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'M'),
(3, 'LUIS DOMINGUES', 32, '111111111', 'Psicología', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'T'),
(4, 'ROXANA SALAS', 30, '111111111', 'Psiquiatría', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'M'),
(5, 'LIZBETH ROJAS', 33, '111111111', 'Oftalmología', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'T'),
(6, 'CARLOS ORTEGA', 35, '111111111', 'Cirugía General I', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'M'),
(7, 'KARLA CEPEDA', 32, '111111111', 'Cirugía General I', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'T'),
(8, 'ROBERTO ALANOCA', 31, '111111111', 'Urología', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'M'),
(9, 'MARIA HINOJOSA', 30, '111111111', 'Pediatría', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'T'),
(10, 'CARLOS MAMANI', 21, '111111111', 'Cardiología', 'Av. Sinnombre', '999999999', 'example@gmail.com', 'Arequipa', 'M');

-- --------------------------------------------------------

--
-- Estructura Stand-in para la vista `medicosview`
-- (Véase abajo para la vista actual)
--
CREATE TABLE `medicosview` (
`idc` int(10)
,`nmed` int(10)
,`nombre` mediumtext
,`espec` text
,`hora` time
,`turno` varchar(6)
,`estado` varchar(9)
,`codigopac` int(10)
,`fecha` date
);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `paciente`
--

CREATE TABLE `paciente` (
  `codigopac` int(10) NOT NULL,
  `nombre` mediumtext COLLATE utf32_spanish_ci NOT NULL,
  `edad` int(11) NOT NULL,
  `DNI` text COLLATE utf32_spanish_ci NOT NULL,
  `direccion` mediumtext COLLATE utf32_spanish_ci NOT NULL,
  `telefono` text COLLATE utf32_spanish_ci NOT NULL,
  `email` text COLLATE utf32_spanish_ci NOT NULL,
  `ciudad` text COLLATE utf32_spanish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf32 COLLATE=utf32_spanish_ci;

--
-- Volcado de datos para la tabla `paciente`
--

INSERT INTO `paciente` (`codigopac`, `nombre`, `edad`, `DNI`, `direccion`, `telefono`, `email`, `ciudad`) VALUES
(1, 'SERGIO ESCOBEDO', 27, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(2, 'SOLEDAD RAMOS', 20, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(3, 'JUANA RODRIGUEZ', 35, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(4, 'LEANDRO SANTANA', 36, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(5, 'LIZ MOLINA', 19, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(6, 'JAVIER ALVAREZ', 21, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(7, 'MANUEL CARRILLO', 35, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(8, 'SANDRA BENAVENTE', 52, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(9, 'NICOLE TICONA', 40, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa'),
(10, 'ROGELIO VEGA', 60, '11111111', 'Av.SinNombre', '999999999', 'example@gmail.com', 'Arequipa');

-- --------------------------------------------------------

--
-- Estructura Stand-in para la vista `pacientesview`
-- (Véase abajo para la vista actual)
--
CREATE TABLE `pacientesview` (
`idc` int(10)
,`npac` int(10)
,`nombre` mediumtext
,`DNI` text
,`telefono` text
,`edad` int(11)
,`hora` time
,`turno` varchar(6)
,`estado` varchar(9)
,`codigomed` int(10)
,`fecha` date
);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuarios`
--

CREATE TABLE `usuarios` (
  `codigo` int(10) NOT NULL,
  `cargo` char(1) COLLATE utf8_spanish_ci NOT NULL,
  `usuario` varchar(255) COLLATE utf8_spanish_ci NOT NULL,
  `clave` varchar(255) COLLATE utf8_spanish_ci NOT NULL,
  `idreferencia` int(10) NOT NULL COMMENT 'Id que referencia al id del medico/doctor/admin\r\n '
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;

--
-- Volcado de datos para la tabla `usuarios`
--

INSERT INTO `usuarios` (`codigo`, `cargo`, `usuario`, `clave`, `idreferencia`) VALUES
(1, 'P', 'juanaR', '202cb962ac59075b964b07152d234b70', 3),
(2, 'M', 'roxanaS', '202cb962ac59075b964b07152d234b70', 4),
(3, 'A', 'admEnzo', '202cb962ac59075b964b07152d234b70', 2),
(5, 'M', 'alejo', '202cb962ac59075b964b07152d234b70\r\n', 1),
(6, 'M', 'jorgeS', '202cb962ac59075b964b07152d234b70', 2),
(7, 'M', 'luisD', '202cb962ac59075b964b07152d234b70', 3),
(8, 'M', 'lizbethR', '202cb962ac59075b964b07152d234b70', 5),
(9, 'M', 'carlosO', '202cb962ac59075b964b07152d234b70', 6),
(10, 'M', 'karlaC', '202cb962ac59075b964b07152d234b70', 7),
(11, 'M', 'robertoA', '202cb962ac59075b964b07152d234b70', 8),
(12, 'M', 'mariaH', '202cb962ac59075b964b07152d234b70', 9),
(13, 'M', 'carlosM', '202cb962ac59075b964b07152d234b70', 10);

-- --------------------------------------------------------

--
-- Estructura para la vista `medicosview`
--
DROP TABLE IF EXISTS `medicosview`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `medicosview`  AS SELECT `c`.`idcita` AS `idc`, `c`.`codigomed` AS `nmed`, `med`.`nombre` AS `nombre`, `med`.`especialidad` AS `espec`, `c`.`hora` AS `hora`, CASE WHEN `c`.`turno` = 'M' THEN 'Diurno' WHEN `c`.`turno` = 'T' THEN 'Tarde' END AS `turno`, CASE WHEN `c`.`estado` = 1 THEN 'Atendido' WHEN `c`.`estado` = 2 THEN 'En espera' END AS `estado`, `c`.`codigopac` AS `codigopac`, `c`.`fecha` AS `fecha` FROM (`citas` `c` join `medico` `med` on(`med`.`codigomed` = `c`.`codigomed`))  ;

-- --------------------------------------------------------

--
-- Estructura para la vista `pacientesview`
--
DROP TABLE IF EXISTS `pacientesview`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `pacientesview`  AS SELECT `c`.`idcita` AS `idc`, `c`.`codigopac` AS `npac`, `pac`.`nombre` AS `nombre`, `pac`.`DNI` AS `DNI`, `pac`.`telefono` AS `telefono`, `pac`.`edad` AS `edad`, `c`.`hora` AS `hora`, CASE WHEN `c`.`turno` = 'M' THEN 'Diurno' WHEN `c`.`turno` = 'T' THEN 'Tarde' WHEN `c`.`turno` = 'N' THEN 'Noche' END AS `turno`, CASE WHEN `c`.`estado` = 0 THEN 'Anulado' WHEN `c`.`estado` = 1 THEN 'Atendido' WHEN `c`.`estado` = 2 THEN 'En Espera' END AS `estado`, `c`.`codigomed` AS `codigomed`, `c`.`fecha` AS `fecha` FROM (`citas` `c` join `paciente` `pac` on(`pac`.`codigopac` = `c`.`codigopac`))  ;

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `administrador`
--
ALTER TABLE `administrador`
  ADD PRIMARY KEY (`codigoadm`);

--
-- Indices de la tabla `citas`
--
ALTER TABLE `citas`
  ADD PRIMARY KEY (`idcita`);

--
-- Indices de la tabla `medico`
--
ALTER TABLE `medico`
  ADD PRIMARY KEY (`codigomed`) USING BTREE;

--
-- Indices de la tabla `paciente`
--
ALTER TABLE `paciente`
  ADD PRIMARY KEY (`codigopac`);

--
-- Indices de la tabla `usuarios`
--
ALTER TABLE `usuarios`
  ADD PRIMARY KEY (`codigo`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `administrador`
--
ALTER TABLE `administrador`
  MODIFY `codigoadm` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT de la tabla `citas`
--
ALTER TABLE `citas`
  MODIFY `idcita` int(10) NOT NULL AUTO_INCREMENT COMMENT 'id de la cita', AUTO_INCREMENT=17;

--
-- AUTO_INCREMENT de la tabla `medico`
--
ALTER TABLE `medico`
  MODIFY `codigomed` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- AUTO_INCREMENT de la tabla `paciente`
--
ALTER TABLE `paciente`
  MODIFY `codigopac` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;

--
-- AUTO_INCREMENT de la tabla `usuarios`
--
ALTER TABLE `usuarios`
  MODIFY `codigo` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
