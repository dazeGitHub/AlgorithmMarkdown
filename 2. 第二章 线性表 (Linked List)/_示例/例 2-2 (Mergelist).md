
##### 例 2-2 

已知线性表 LA 和 LB 中的数据元素按值非递减有序排列，现要求将 LA 和 LB 归并为一个新的线性表 LC，且 LC 中的数据元素仍按值非递减有序排列。例如，设

$\qquad LA = (3,5,8,11)$

$\qquad LB = (2,6,8,9,11,15,20)$
则
$\qquad LC= (2,3,5,6,8,8,9,11,11,15,20)$

从上述问题要求可知，LC 中的数据元素或是 LA 中的数据元素，或是 LB 中的数据元素，则只要先设 LC 为空表，然后将 LA 或 LB 中的元素逐个插入到 LC 中即可。为使 LC 中元素按值非递减有序排列，可设两个指针 i 和 j 分别指向 LA 和 LB 中某个元素，若设 i 当前所指的元素为 a, j 当前所指的元素为 b，则当前应插人到 LC 中的元素 c 为

$\qquad c = \left\{\begin{array}{ll}a & \text { 当 } a \leqslant b \text { 时 } \\ b & \text { 当 } a>b \text { 时 }\end{array}\right.$

显然，指针 i 和 j 的初值均为 1, 在所指元素插入 LC 之后，在 LA 或 LB 中顺序后移。上述归并算法如算法 2.2 所示。

###### 算法 2.2

```java
//线性表的合并（不会去重）
void Mergelist (List La, List Lb, List &Lc){

    //已知线性表 La 和 Lb 中的数据元素按值非递减排列
    //归并 La 和 Lb 得到新的线性表 Lc, Lc 的数据元素也按值非递减排列

    Initlist (Lc);

    //i 是 La 的元素位置，j 是 Lb 的元素位置，k 是 Lc 的元素位置，都从 1 开始
    int i,j,k;
    i = j = 1; k = 0;

    int La_Len = Listlength(La); 
    int Lb_Len = Listlength (Lb);

    int ai = 0;
    int bj = 0;

    while ((i <= La_Len) && (j <= Lb_Len)) { //La 和 Lb 均非空 

        //获取 La 中的第 i 个元素赋值给 ai
        GetElem (La, i, ai); 

        //获取 Lb 中的第 j 个元素赋值给 bj
        GetElem (Lb,j, bj);

        //如果 ai 比 bj 小，那么把 ai 插入到 Lc 中，否则把 bj 插入到 Lc 中
        if  (ai <= bj) {
            Listinsert (Lc, ++k, ai); ++i; 
        }else{
            Listinsert (Lc, ++k, bj); ++j;
        };
    }

    //后边这两个循环只执行一个
    //如果 i 还没到 La 的最后，则把 La 剩下的元素 insert 到 Lc 中
    while (i <= La_Len){
        GetElem (La, i++, ai);
        Listinsert (Lc, ++k, ai);
    }

    //如果 i 还没到 Lb 的最后，则把 Lb 剩下的元素 insert 到 Lc 中
    while (j <= Lb_Len ) {
        GetElem(Lb, j++, bj);
        Listinsert(Lc, ++k, bj);
    }

}// Mergelist
```