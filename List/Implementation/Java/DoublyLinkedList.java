public class DoublyLinkedList{
    private DoublyNode first;
    private DoublyNode last;


    public DoublyLinkedList(){
        first = new DoublyNode();
        last = first;
    }

    public void addAtFirst(int x){
        DoublyNode tmp = new DoublyNode(x);
        tmp.back = first;
        tmp.next = first.next;
        first.next = tmp;
        if( first == last )
            last = tmp;
        else
            tmp.next.back = tmp;
        
        tmp = null;

    }

    public void addAtLast(int x){
        last.next = new DoublyNode(x);
        last.next.back = last;
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

            DoublyNode i = first;
            for( int j = 0; j < position; j++, i = i.next);

            DoublyNode tmp = new DoublyNode(x);
            tmp.back = i;
            tmp.next = i.next;
            tmp.back.next = tmp.next.back = tmp;
            tmp = i = null;

        }
        
    }


    public int removeAtFirst() throws Exception{
        if( first == last )
           throw new Exception("Error!");

        DoublyNode tmp = first;
        fist = first.next;
        int ans = first.element;
        tmp.next = first.back = null;
        tmp = null;
        
        return ans;

    }

    public int removeAtLast() throws Exception{
        if( first == last )
           throw new Exception("Error!");
        
        DoublyNode i;
        
        for( i = first; i.next != last; i = i.next);

        int ans = last.element;
        last = last.ant;
        last.next.back = null;
        last.next = null;
    
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

            DoublyNode i = first;
            for( int j = 0; j < position; j++, i = i.next);

            i.back.next = i.next;
            i.next.back = i.back;
            ans = tmp.element;
            i.next = i.back = null;
            i = null;

        }


        return ans;
        
    }


    public int lenght() {
        int lenght = 0; 
        for(DoublyNode i = first; i != last; i = i.next, lenght++);
        return lenght;
    }
    
}
