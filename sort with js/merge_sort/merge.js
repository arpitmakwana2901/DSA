const arr1 = [2,4,6,8,10];
const arr2 = [1,3,5,7,9,11,12,13];

function mergeTwoSortedArray(arr1, arr2){
    let i =0;
    let j =0;
    let z = 0;
    let array = new Array(arr1.length + arr2.length);
    while(i < arr1.length && j < arr2.length){
        if(arr1[i] < arr2[j]){
            array[z] = arr1[i];
            z++;
            i++;
        }else{
            array[z] = arr2[j];
            j++;
            z++
        }
    }
    while(i < arr1.length){
        array[z] = arr1[i];
        i++;
        z++
    }
    while(j < arr2.length){
        array[z] = arr2[j];
        j++;
        z++;
    }
    return array
}

console.log(mergeTwoSortedArray(arr1,arr2))