class zoo {
    String name;
    String[] enclose;

    public zoo(String name, String[] enclose) {
        this.name = name;
        this.enclose = enclose;
    }

    public void displayzoo() {
        System.out.println("NAME oF ZOO:" + name);
        for (String x : enclose)
            System.out.println(x);

    }

    class enclosure {
        String name;
        String type;
        String[] animals;

        public enclosure(String n, String t, String[] a) {
            name = n;
            type = t;
            animals = a;
        }

        public void displayenclosure() {
            System.out.println("NAME:" + name);
            System.out.println("TYPE:" + type);
            for (String x : animals)
                System.out.println(x);
        }

    }

    static class zooInfo {
        String addr;
        String phno;

        public zooInfo(String a, String p) {
            addr = a;
            phno = p;

        }

        public void displayzooInfo() {
            System.out.println("ADDRESS:" + addr);
            System.out.println("PHONE NUMBER:" + phno);

        }
    }
}

public class zooDemo {
    public static void main(String[] args) {
        String[] enclosure = { "Enclosure 1", "Enclosure 2" };
        String[] animals = { "Zebra", "Lion", "Giraffe" };
        zoo z = new zoo("IVM", enclosure);
        zoo.enclosure en = z.new enclosure("Grassland", "Outdoor", animals);
        zoo.zooInfo info = new zoo.zooInfo("ABC,TVN", "45678888");
        z.displayzoo();
        info.displayzooInfo();
        en.displayenclosure();

    }

}
