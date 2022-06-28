public class SinglyLinkedList{
    private Node first;
    private Node last;


    public SinglyLinkedList(){
        first = new Node();
        last = first;
    }

    public void addAtFirst(int x){
        Node tmp = new Node(x);
        tmp.next = first.next;
        first.next = tmp;
        if( first == last )
            last = tmp;
        
        tmp = null;

    }

    public void addAtLast(int x){
        last.next = new Node(x);
        last = last.next;
        
    }

    public void insert(int position,int x) throws Exception{
        int lenght = lenght();

        if( position < 0 || position > lenght)
            throw new Exception("Error!");
        
        else if( pos == 0 )
            addAtFirst(x);

        else if( pos == lenght )
            addAtLast(x);

        else {

            Node i = first;
            for( int j = 0; j < position; j++, i = i.next);

            Node tmp = new Node(x);
            tmp.next = i.next;
            i.next = tmp;
            tmp = i = null;

        }
        
    }


    public int removeAtFirst() throws Exception{
        if( first == last )
           throw new Exception("Error!");

        Node tmp = first;
        fist = first.next;
        int ans = first.element;
        tmp.next = null;
        tmp = null;
        
        return ans;

    }

    public int removeAtLast() throws Exception{
        if( first == last )
           throw new Exception("Error!");
        
        Node i;
        
        for( i = first; i.next != last; i = i.next);

        int ans = last.element;
        last = i;
        i = last.next = null;
    
        return ans;
       
        
    }

    public int remove(int position,int x) throws Exception{
        int lenght = lenght();
        int ans;

        if( position < 0 || position > lenght)
            throw new Exception("Error!");
        
        else if( position == 0 )
            removeAtFirst(x);

        else if( position == lenght )
            removeAtLast(x);

        else {

            Node i = first;
            for( int j = 0; j < position; j++, i = i.next);

            Node tmp = i.next;
            ans = tmp.element;
            i.next = tmp.next;
            tmp.next = null;
            i = tmp = null;

        }


        return ans;
        
    }


    public int lenght() {
        int lenght = 0; 
        for(Node i = first; i != last; i = i.next, lenght++);
        return lenght;
    }
    
}