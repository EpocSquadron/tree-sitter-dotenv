const NEWLINE = /\r?\n/

module.exports = grammar({
  name: 'dotenv',
  
  extras: $ => [
    $.comment,
    /\s/
  ],
  
  rules: {
    source_file: $ => repeat(choice(
      $.comment,
      $.variable
    )),
    
    comment: $ => token(seq("#", /.*/)),
    
    variable: $ => seq(
      field("name", $.identifier),
      "=",
      optional(field("value", $.value))
    ),
    
    identifier: $ => /[A-Z][0-9a-zA-Z_]*/,
    value: $ => choice(
      $.bool,
      $.string_interpolated,
      $.string_literal,
      $.integer,
      $.raw_value,
      // TODO: More value types
    ),
    
    bool: $ => choice(
      'true',
      'false'
    ),

    integer: $ => /\d+/,

    string_interpolated: $ => seq('"', repeat(/[^"]/), '"'),

    string_literal: $ => seq("'", repeat(/[^']/), "'"),

    raw_value: $ => /\w+/
  }
})
