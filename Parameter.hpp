Storage storage = new Storage();

Node node = storage.open(name);

IntPar intPar;
intPar.setUp(value, default, min, max);
node.addPar(key, intPar);
node.addArray(key, 
