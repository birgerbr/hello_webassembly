var Module = {
  'print': function(text){ 
    console.log('From app: ' + text) 
  },
  'preRun' : function(){
    console.log('prerun');
    FS.createDataFile('/', 'input.txt', 'Hello webassembly', true, true, true);
  },
  'noInitialRun': true,
};