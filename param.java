package Day2;

import java.util.Scanner;

public class param {
    public static void main(String[] args) {
          Scanner scan = new Scanner(System.in);
          double weight = 0,height = 0, bmi = 0;
          String status = "";
          System.out.println("welcome to know your health status");
          System.out.println("let us know your weight(kg)");
          weight = scan.nextDouble();
          System.out.println("let ud know your height(cm)");
          height = scan.nextDouble();
          height/=100;
          bmi = weight/(height*height);
          status = (bmi<18.0)?"Underweight":
          (bmi>=18.0&&bmi<24.0)?"normal":
          (bmi>24.0&&bmi<28.0)?"Overweight":"Obese";
          System.out.println(status+" is your health update");
    }
}
