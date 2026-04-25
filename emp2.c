#include <stdio.h>
float calcHRA(float basic);
float calcda(float basic);
float calcPF(float basic);
float calcIncomeTax(float basic);
float calcGrossSalary(float basic);
float calculateDeductions(float basic);
float calculateNetSalary(float gross, float deductions);
void printSalarySlip(int empID, float basic, float gross, float deductions, float net);
int main() {
    int empID;
    float basicSalary, grossSalary, deductions, netSalary;
    printf("Enter Employee ID: ");
    scanf("%d", &empID);
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    grossSalary = calculateGrossSalary(basicSalary);
    deductions = calculateDeductions(basicSalary);
    netSalary = calculateNetSalary(grossSalary, deductions);
    printSalarySlip(empID, basicSalary, grossSalary, deductions, netSalary);
    return 0;
}
float calculateHRA(float basic) {
    return 0.20 * basic;
}
float calculateDA(float basic) {
    return 0.50 * basic;
}
float calculatePF(float basic) {
    return 0.12 * basic;
}
float calculateIncomeTax(float basic) {
    return 0.10 * basic;
}
float calculateGrossSalary(float basic) {
    return basic + calculateHRA(basic) + calculateDA(basic);
}
float calculateDeductions(float basic) {
    return calculatePF(basic) + calculateIncomeTax(basic);
}
float calculateNetSalary(float gross, float deductions) {
    return gross - deductions;
}
void printSalarySlip(int empID, float basic, float gross, float deductions, float net) {
    printf("\n******** DETAILS OF EMPLOYEE *********\n");
    printf("Employee ID     : %d\n", empID);
    printf("Basic Salary    : %.2f\n", basic);
    printf("Gross Salary    : %.2f\n", gross);
    printf("Deductions      : %.2f\n", deductions);
    printf("Net Salary      : %.2f\n", net);
    printf("\n****************************************\n");
}
