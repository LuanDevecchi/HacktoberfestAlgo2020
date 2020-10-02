import java.util.Scanner;
class Salary{
public static void main(String args[]){
Scanner cin = new Scanner(System.in);
System.out.println("Welcome");
System.out.println("How can I help you");
System.out.println("Please Entre Your Salary and let me check your Designation");

int pay;
pay = cin.nextInt();
System.out.println("Pay: " + pay);
if (pay>=10000&&pay<=20000){
System.out.println("Manager Operations");}

if (pay>=20000&&pay<=30000){
System.out.println("Manager");}

if (pay>=30000&&pay<=40000){
System.out.println("Area Manager");}

if (pay>=40000&&pay<=50000){
System.out.println("Regional Manager");}

else{
    System.out.println("Invalid!");
}
}
}