/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 00:14:05 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/25 06:41:35 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

int evaluateRPN(std::string expression) 
{
    std::stack<int> operandStack;

    for (size_t i = 0; i < expression.size(); i++) {
        char c = expression[i];

        if (isdigit(c)) 
            operandStack.push(c - '0');
        else if (c == '+' || c == '-' || c == '*' || c == '/') 
        {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            switch (c) 
            {
                case '+':
                    operandStack.push(operand1 + operand2);
                    break;
                case '-':
                    operandStack.push(operand1 - operand2);
                    break;
                case '*':
                    operandStack.push(operand1 * operand2);
                    break;
                case '/':
                    operandStack.push(operand1 / operand2);
                    break;
            }
        }
    }
    return operandStack.top();
}