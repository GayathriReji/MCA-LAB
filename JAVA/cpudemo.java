class Cpu {
    int price;

    public Cpu(int p) {
        price = p;
    }

    public void displaycpu() {
        System.out.println("Price of CPU:" + price);
    }

    class processor {
        int no_of_cores;
        String manufacturer;

        public processor(int n, String m) {
            no_of_cores = n;
            manufacturer = m;
        }

        public void displayprocessor() {
            System.out.println("NO_OF_CORES:" + no_of_cores);
            System.out.println("MANUFACTURER:" + manufacturer);
        }

    }

    static class RAM {
        String memory;
        String manufacture;

        public RAM(String me, String ma) {
            memory = me;
            manufacture = ma;

        }

        public void displayRam() {
            System.out.println("MEMORY:" + memory);
            System.out.println("MANUFACTURE:" + manufacture);

        }
    }
}

public class cpuDemo {
    public static void main(String[] args) {
        Cpu c = new Cpu(1000);
        Cpu.processor p = c.new processor(4, "intel");
        Cpu.RAM r = new Cpu.RAM("8gb", "samsung");
        c.displaycpu();
        p.displayprocessor();
        r.displayRam();
    }

}
