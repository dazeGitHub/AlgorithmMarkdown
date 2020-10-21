
##### 例 2-1 

假设利用两个线性表 LA 和 LB 分别表示两个集合 A 和 B（即线性表中的数据元素即为集合中的成员），现要求一个新的集合 A = A U B。

这就要求对线性表作如下操作：扩大线性表 LA，将存在于线性表 LB 中而不存在于线性表 LA 中的数据元素插入到线性表 LA 中去。只要从线性表 LB 中依次取得每个数据元素，并依值在线性表 LA 中进行査访，若不存在，则插入之。

上述操作过程可用下列算法描述之。

###### 算法 2.1

```java
//线性表的并集，将 Lb 合并到 La，因为 union 是关键字，所以方法名不再用 union，而用 Union
void Union (List & La, List Lb){
    //将所有在线性表 Lb 中但不在 La 中的数据元素插入到 La 中
    //求线性表的长度
    int La_Len = Listlength (La); 
    int Lb_Len = Listlength (Lb);

    for (int i = 1; i <= Lb_Len; i ++){

        ElemType e;
        
        //取 Lb 中第 i 个数据元素赋给 e
        GetElem (Lb, i, e);            
        
        //如果 La 中没有元素和 e 相等则将 e 插入到 La 中
        if (!LocateElem (La, e, equal))    //Locate elem : 定位元素
            ListInsert (La, ++ La_Len, e); //La 中不存在和 e 相同的数据元素，则插入之
    }
}//union
```

> ++La_len 表示参数 La_len 的值先增 1, 然后再传递给函数。若数学符号 + 在参量名之后，则表示先将参数传递给函数，然后参数的值再增 1, 以后均类同。
