#include <stdio.h>

// Programa que calcula o pagamento semanal de cada funcionário.

int main() {

    /* 
        * Each employee has his code:
        * Manager: 1
        * Hourly Workers: 2
        * Comissioned Workers: 3
        * Unit Workers: 4
    */

    int employeeCode;

    float salary = 1000, extraHour = 0;

    int employeeCount = 0;

    // quanto employeeCount for diferente de 9999 (valor sentinela) continua o loop while
    while (employeeCount != 9999) {

        // Pede o codigo de funcionaro
        printf("Payment Code: (Manager: 1, Hourly Workers: 2, Comissioned Workers: 3, Unit Workers: 4) ");
        scanf("%d", &employeeCode);  

        // Se digitar 9999 que é o valor sentinela para o loop. e sai do while
         if (employeeCode == 9999) {

            employeeCount = 9999;

            break;
        
        // Se digitar um valor entre 5 e 9998, o tipo de usuario não existe
        } else if (employeeCode > 4 && employeeCode < 9999) {

            printf("Type of employee does not exists!\n");

        } else {        

        // verifica o tipo de funcionario de acordo com o código
        if (employeeCode == 1) {

            printf("Type of Employee: Manager\n");
            

        } else if (employeeCode == 2) {

            printf("Type of Employee: Hourly Workers\n");

        } else if (employeeCode == 3) {

            printf("Type of Employee: Comissioned Workers\n");
            extraHour = 250;

        } else if (employeeCode == 4) {

            printf("Type of Employee: Unit Workers\n");

        } 

        // mostra os resultados
        printf("Payment: ");
        scanf("%f", &salary);  

        // atribui horas extras ao salario de acordo com o employeeCode
        switch (employeeCode) {

            case 1:
            case 2:
            case 3:
            case 4:
            salary = (salary + salary) + extraHour;
            printf("Salary: R$ %.2f\n", salary);

            break;

        }             


        } //endif

        employeeCount++;
    }

    return 0;
}