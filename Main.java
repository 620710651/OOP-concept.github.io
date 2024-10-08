class Animal {
    String name;
    public Animal() {
        System.out.println("create animal");
    }

    public Animal(String name) {
        this.name = name;
        System.out.println("create animal"+ name);

        
    }

    public void finalize() {
        System.out.println("delete animal");
    }

    public void sound() {
        System.out.println("animal makes a sound");
    }
}

class Dog extends Animal {
    public Dog() {
        System.out.println("dog");
    }

    public void finalize() {
        System.out.println("delete dog");
    }

    @Override
    public void sound() {
        System.out.println("dog barks");
    }
}

class Cat extends Animal {
    public Cat() {
        System.out.println("cat");
    }

    public void finalize() {
        System.out.println("delete cat");
    }

    @Override
    public void sound() {
        System.out.println("cat meows");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal a = new Animal();
        Animal an = new Animal("MooDeng");
        Dog b = new Dog();
        Cat c = new Cat();

        an = c; //polymorphic
        a.sound();
        b.sound();
        c.sound();
    }
}