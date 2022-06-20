# 11. Is The Doubly Linked List Circular
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a doubly linked list, the task is to check if it is circular or not.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 2&lt;-&gt;3&lt;-&gt;4&lt;-&gt;5&lt;-&gt;6
<strong>Output: </strong>0</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 4&lt;--&gt;6
(the last and the first node is connected,
i.e. 6 &lt;--&gt; 4
<strong>Output: </strong>1</span></pre>

<p><span style="font-size:18px"><strong>User Task:</strong><br>
The task is to complete the function <strong>isCircular()</strong> which takes <strong>head </strong>reference as an argument. The function should return <strong>true </strong>if the doubly LL is circular and <strong>false </strong>if it is not. (if the returned value if true, the driver code prints 1, otherwise 0)</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of nodes &lt;= 10<sup>6</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>