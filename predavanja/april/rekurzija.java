public class rekurzija {


    public static void main(String[] args){

    for(int i = 1; i < 100; i++){

        System.out.println(fakulteta_rek(i));
    }

    }

    static int fakulteta_rek(int a)
    {
        return a * fakulteta_rek(a - 1);
    }
}