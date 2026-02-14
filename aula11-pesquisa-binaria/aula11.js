const lista = [2, 10, 15, 17, 21, 28, 40, 55, 60, 61, 62, 83];

function pesqBin(valores, procurado) {
    let posLi = 0;
    let posLs = valores.length - 1;
    while (posLi <= posLs) {
        let posMeio = Math.floor((posLi + posLs) / 2);
        let palpite = valores[posMeio];
        if (palpite === procurado) return posMeio;
        if (palpite > procurado) posLs = posMeio - 1;
        else posLi = posMeio + 1;
    }
    return -1;
}


console.log(pesqBin(lista, 21))