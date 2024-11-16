# aip_control_work1
this repository was created to publicate solve of first control work.

/*
* задача в change_martrix_by_one превратить выбранный пользователем элемент p[i][j] (далее будем называть его мнимым центром) 
* в единицу и с каждым слоем в матрице увеличивать это значение.
* 
* например, матрица 4х4, для элемента с индексом 2,3 будет выглядеть так:
* 
* 4 3 3 3
* 4 3 2 2
* 4 3 2 1
* 4 3 2 2
* 
* 
* пояснение к решению данной задачи:
* 
* разобьем матрицу на слои, слой увеличивается на единицу, каждый раз, когда мы отступаем от мнимого цетра на единицу -> (в режиме prewiev к сожалению таблица ломается, так что смотрите код напрямую :з)
*____________________________
*| слой | 3   2   1   2   3 |
*| -----+-------------------|
*|   3  | 3   3   3   3   3 |
*|   2  | 3   2   2   2   3 |
*|   1  | 3   2   1   2   3 |
*|   2  | 3   2   2   2   3 |
*|   3  | 3   3   3   3   3 |
*|--------------------------|
* 
* возьмите число от 1 до 3 - это будет слоем с каждой стороны, и сравните с числом лежащим на пересечении этих слоёв. Да, они совпадают
* 
* 1 шаг - пусть текущий слой матрицы value = 1 (причём мы не обязательно стартуем из центра матрицы)
* 2 шаг - мнимый центр = value // это слой на котором мы сейчас находимся (нумерация от 1)
* 3 шаг - value++ // перемещаемся на следующий слой
* 4 шаг - заменяем все элементы на значение слоя, обходя мнимый центр и каждый элемент, который меньше текущего слоя
* и находится на расстроянии от мнимого центра равном текущему слою минус единица.
* 
* если кратко: заменяем все элементы на значение слоя, обходя центр. прибавляем слой на 1.
* пропускаем элемент, если элемент < тек. слоя и находится на расстоянии тек. слой - 1
* 
* для лучшго понимания я вывожу каждый раз матрицу после увеличения значения value, 
* это так же можно пропустить и вывести только последние  матрицу.
*/
