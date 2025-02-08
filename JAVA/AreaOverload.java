class Area {
    public int area(int l, int b) {
        return l * b;
    }
    public double area(double l, double b) {
        return l * b;
    }
    public int area(int s) {
        return s * s;
    }
    public double area(double s) {
        return s * s;
    }
    public double area(double h, double b ,String shape) {
        return 0.5*b*h;
    }
    public double area(double r,String shape) {
        return Math.PI*r*r;
    }
}

public class AreaOverload {
   public static void main(String [] args){
   Area a=new Area();
   int rect1=a.area(5,6);
   System.out.println("Area of Rectangle(int):"+rect1);
   double rect2=a.area(5.0,6.5);
   System.out.println("Area of Rectangle(double):"+rect2);
   int sqr1=a.area(5);
   System.out.println("Area of Square(int):"+sqr1);
   double sqr2=a.area(5.6);
   System.out.println("Area of Square(double):"+sqr2);
   double cir=a.area(4.6,"circle");
   System.out.println("Area of Circle(double):"+cir);
   double tri=a.area(5.4,2,"triangle");
   System.out.println("Area of Triangle(double):"+tri);


   }

}
