package Day14;

import java.util.Arrays;

public class HandsOnString {
    public static void main(String[] args) {
        String alpha = "Manoj Reddy";
        String beta = new String("         Manoj Reddy   ");
        System.out.println(beta.length());
        beta = beta.trim();
        System.out.println(beta.length());
        System.out.println(beta.equals("Manoj Reddy"));
        System.out.println(alpha=="Manoj Reddy");
        alpha = alpha.replace("Manoj", "Mani");
        System.out.println(alpha.compareTo("Mani Reddy"));
        byte[] bytes = alpha.getBytes();
        System.out.println(Arrays.toString(bytes));
        char[] chars = alpha.toCharArray();
        System.out.println(Arrays.toString(chars));
        byte[] newBytes = {65,66,67,68,69,70};
        String zeta = new String(newBytes);
        System.out.println(zeta);
        char[] newChars = {122,121,120,119,118};
        String delta = new String(newChars);
        System.out.println(delta);
        System.out.println(delta.contains("y"));
    }
}
