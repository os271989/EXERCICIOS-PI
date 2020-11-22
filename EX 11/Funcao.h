/*****************************************************************//**
 * \file       Funcao.h
 * \brief      Ficheiro para fazer ligacao entre ficheiro com funcao calculoImc e ficheiro com funcao Main
 * \student id a20844@alunos.ipca.pt
 * \author     OSCAR ARAUJO
 * \date       19 November 2020
 *********************************************************************/

//#pragma once

/// Definir A

#ifndef A
#define A

/// <Declarar funcao externa para calculo de IMC>
/// <param name="p"> --> Variavel que ira tomar valor do peso introduzido por utilizador
/// <param name="a"> --> Variavel que ira tomar valor da altura introduzida por utilizador
/// <returns> --> Funcao ira devolver o resultado do calculo de IMC

extern float calculoImc(float p, float a);

#endif
