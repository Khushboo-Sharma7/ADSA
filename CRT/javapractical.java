//single inheritance
/* public class javapractical {
    public static void main(String args[])
    {
        fish obj=new fish();
        obj.swims();
        obj.eats();
    }
}
class animal{
    void eats(){
        System.out.println("Eats");
    }
    void breath(){
        System.out.println("Breathes");
    }
}
class fish extends animal{
    void swims(){
        System.out.println("Swims");
    }
} */

//multilevel inheritance
/* public class javapractical{
    public static void main(String args[])
    {
        dog obj=new dog();
        obj.eats();
        obj.legs=10;
        System.out.println(obj.legs);
        obj.breed="Golden Retriever";
        System.out.println(obj.breed);
    }
}
class animal{
    void eats(){
        System.out.println("Eats");
    }
    void breath(){
        System.out.println("Breathes");
    }
}
class mammal extends animal{
    int legs;
}
class dog extends mammal{
    String breed;
} */

//heirarchial inheritance
/* class animal{
    void eats(){
        System.out.println("Eats");
    }
    void breath(){
        System.out.println("Breathes");
    }
}
class mammal extends animal{
    void walk(){
        System.out.println("Walks");
    }
}
class fish extends animal{
    void swims(){
        System.out.println("Swims");
    }
}
class bird extends animal{
    void fly(){
        System.out.println("Flies");
    }
}
public class javapractical{
    public static void main(String args[])
    {
        bird obj=new bird();
        obj.eats();
        obj.fly();
        fish obj1=new fish();
        obj1.swims();
        obj1.breath();
    }
} */
//multiple
/* interface herbivore{
    void plant();
}
interface carnivore{
    void animal();
}
class bear implements herbivore,carnivore{
    public void plant(){
        System.out.println("Eats plants");
    }
    public void animal(){
        System.out.println("Eats animal");
    }
}
public class javapractical{
    public static void main(String args[])
    {
        bear obj=new bear();
        obj.plant();
        obj.animal();
    }
} */