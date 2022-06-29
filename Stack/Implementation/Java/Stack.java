public class Stack{
    private Node top;

    public Stack(){
        top = null;
    } 

    public void push(int x){
        Node tmp = new Node(x);
        tmp.next = top;
        top = tmp;
        tmp = null;
    }

    public int pop() throws Exception {
        if( top == null)
           throw new Exception("Error!");

        int ans = top.element;
        Node  tmp = top;
        top = top.next;
        tmp.next = null;
        tmp = null;
        return ans;
    } 
    
}