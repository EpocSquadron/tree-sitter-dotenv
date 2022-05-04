const NEWLINE = /\r?\n/

module.exports = grammar({
  name: 'dotenv',
  
  extras: $ => [
    $.comment
  ],
  
  rules: {
    source_file: $ => choice(
      $.comment,
      $.variable
    ),
    
    comment: $ => token(seq("#", /.*/)),
    
    variable: $ => seq(
      field("name", $.identifier),
      "=",
      field("value", $.value)
    ),
    
    identifier: $ => /[A-Z][0-9a-zA-Z_]*/,
    value: $ => choice(
      $.bool,
      /\w+/,
      // TODO: More value types
    ),
    
    bool: $ => choice(
      'true',
      'false'
    ),
  }
})
