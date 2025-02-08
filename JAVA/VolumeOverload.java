class Volume {

    public double volume(double l) {
        return l * l * l;
    }

    public double volume(double l, double b, double h) {
        return l * b * h;
    }

    public double volume(double r, String shape) {
        return (4.0 / 3.0) * 3.14 * r * r * r;
    }

    public double volume(double r, double h, String shape) {
        return 3.14 * r * r * h;
    }

    public double volume(double r, double h) {
        return (1.0 / 3.0) * Math.PI * r * r * h;
    }
}

public class VolumeOverload {
    public static void main(String[] args) {
        Volume V = new Volume();

        System.out.println("Volume of Cube:" + V.volume(4.2));
        System.out.println("Volume of Cuboid:" + V.volume(4.2, 5.6, 6.7));
        System.out.println("Volume of Sphere:" + V.volume(4.2, "sphere"));
        System.out.println("Volume of Cylinder:" + V.volume(4.2, 3.4, "cylinder"));
        System.out.println("Volume of Cone:" + V.volume(4.2, 1.2));

    }

}
