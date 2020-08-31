// C# program to implement Stack using linked 
// list so that reverse can be done with O(1)  
// extra space. 
using System;  
  public class StackNode 
{ 
public int data; 
    public StackNode next; 
    public StackNode(int data) 
    {
 this.data = data; 
        this.next = null; 
    } 
} 
 public class Stack  
{
  public StackNode top; 
 // Push and pop operations 
 public void push(int data) 
    { 
        if (this.top == null) 
        { 
            top = new StackNode(data); 
            return; 
        } 
        StackNode s = new StackNode(data); 
        s.next = this.top;
 this.top = s; 
    }
  public StackNode pop() 
    { 
        StackNode s = this.top; 
        this.top = this.top.next; 
        return s; 
    } 
// prints contents of stack 
    public void display() 
    { 
        StackNode s = this.top; 
        while (s != null)  
        { 
            Console.Write(s.data + " "); 
            s = s.next; 
        } 
        Console.WriteLine(); 
    } 
// Reverses the stack using simple 
    // linked list reversal logic. 
    public void reverse() 
    { 
        StackNode prev, cur, succ
cur = prev = this.top; 
        cur = cur.next; 
        prev.next = null; 
        while (cur != null) 
        { 
            succ = cur.next; 
            cur.next = prev; 
            prev = cur; 
            cur = succ; 
        } 
        this.top = prev; 
    } 
} 
public class reverseStackWithoutSpace  
{ 
  // Driver code 
    public static void Main(String []args) 
    { 
        Stack s = new Stack(); 
        s.push(1); 
        s.push(2); 
        s.push(3); 
        s.push(4); 
        Console.WriteLine("Original Stack"); 
        s.display(); 

        // reverse 
        s.reverse(); 

        Console.WriteLine("Reversed Stack"); 
        s.display(); 
    } 
}3-Reverse a stack without using extra space in O(n) using recursion. 

// C# program to implement Stack using linked 
// list so that reverse can be done with O(1)  
// extra space. 
using System;  

public class StackNode 
{ 
    public int data; 
    public StackNode next; 
    public StackNode(int data) 
    { 
        this.data = data; 
        this.next = null; 
    } 
} 

public class Stack  
{ 
    public StackNode top; 

    // Push and pop operations 
    public void push(int data) 
    { 
        if (this.top == null) 
        { 
            top = new StackNode(data); 
            return; 
        } 
        StackNode s = new StackNode(data); 
        s.next = this.top; 
        this.top = s; 
    } 

    public StackNode pop() 
    { 
        StackNode s = this.top; 
        this.top = this.top.next; 
        return s; 
    } 

    // prints contents of stack 
    public void display() 
    { 
        StackNode s = this.top; 
        while (s != null)  
        { 
            Console.Write(s.data + " "); 
            s = s.next; 
        } 
        Console.WriteLine(); 
    } 

    // Reverses the stack using simple 
    // linked list reversal logic. 
    public void reverse() 
    { 
        StackNode prev, cur, succ; 
        cur = prev = this.top; 
        cur = cur.next; 
        prev.next = null; 
        while (cur != null) 
        { 
            succ = cur.next; 
            cur.next = prev; 
            prev = cur; 
            cur = succ; 
        } 
        this.top = prev; 
    } 
} 

public class reverseStackWithoutSpace  
{ 
    // Driver code 
    public static void Main(String []args) 
    { 
        Stack s = new Stack(); 
        s.push(1); 
        s.push(2); 
        s.push(3); 
        s.push(4); 
        Console.WriteLine("Original Stack"); 
        s.display(); 

        // reverse 
        s.reverse(); 

        Console.WriteLine("Reversed Stack"); 
        s.display(); 
    } 
}


