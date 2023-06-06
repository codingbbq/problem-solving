{
    const promise = new Promise((resolve, reject) => {
        const condition = false;
        setTimeout(() => {
            if(condition){
                resolve('Everything worked fine');
            } else {
                reject('Error');
            }
        }, 1000);
    });

    promise
    .then((response) => {
        console.log(response);
    })
    .catch((error) => {
        console.log(error);
    })
    .finally(() => {
        console.log('Here always');
    })
}