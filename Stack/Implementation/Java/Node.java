
class Node{
    public int element;
    public Node next;

    public Node(){
        this(0);
    }

    public Node(int element){
        this.element = element;
        this.next = null;
    }
}