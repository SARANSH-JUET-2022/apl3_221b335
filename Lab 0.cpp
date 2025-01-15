class Juet{
    string name;
    int age;
    
    set_age(int b){age=b;}
    set_name(string[] a){name=a;}
    get_name(){System.out.println("Name is = "+name);}
    get_age(){System.out.println("Age is = "+age);}
};

public class Main
{
	public static void main(String[] args) {
         new obj1=new Juet();
         System.out.println("ENTER NAME :");Scanner ob=new scanner(System.in);obj1.set_name(ob);scanner.close();
         System.out.println("ENTER AGE :");Scanner ob=new scanner.int(System.in);obj1.set_age(ob);scanner.close();
         obj1.get_name();
         obj1.get_age();
	}
}