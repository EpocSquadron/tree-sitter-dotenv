#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_EQ = 2,
  sym_key = 3,
  anon_sym_DQUOTE = 4,
  anon_sym_DQUOTE2 = 5,
  aux_sym__multiline_basic_string_token1 = 6,
  sym_escape_sequence = 7,
  sym__escape_line_ending = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_SQUOTE2 = 10,
  aux_sym_integer_token1 = 11,
  aux_sym_integer_token2 = 12,
  aux_sym_integer_token3 = 13,
  aux_sym_integer_token4 = 14,
  aux_sym_float_token1 = 15,
  aux_sym_float_token2 = 16,
  sym_boolean = 17,
  sym_local_date = 18,
  sym_local_time = 19,
  sym__line_ending_or_eof = 20,
  sym__multiline_basic_string_content = 21,
  sym__multiline_basic_string_end = 22,
  sym__multiline_literal_string_content = 23,
  sym__multiline_literal_string_end = 24,
  sym_comment = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_EQ] = "=",
  [sym_key] = "key",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [aux_sym__multiline_basic_string_token1] = "_multiline_basic_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_boolean] = "boolean",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [sym__line_ending_or_eof] = "_line_ending_or_eof",
  [sym__multiline_basic_string_content] = "_multiline_basic_string_content",
  [sym__multiline_basic_string_end] = "_multiline_basic_string_end",
  [sym__multiline_literal_string_content] = "_multiline_literal_string_content",
  [sym__multiline_literal_string_end] = "_multiline_literal_string_end",
  [sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_key] = sym_key,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [aux_sym__multiline_basic_string_token1] = aux_sym__multiline_basic_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_line_ending] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_boolean] = sym_boolean,
  [sym_local_date] = sym_local_date,
  [sym_local_time] = sym_local_time,
  [sym__line_ending_or_eof] = sym__line_ending_or_eof,
  [sym__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [sym__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [sym__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [sym__multiline_literal_string_end] = sym__multiline_literal_string_end,
  [sym_comment] = sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_line_ending] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date] = {
    .visible = true,
    .named = true,
  },
  [sym_local_time] = {
    .visible = true,
    .named = true,
  },
  [sym__line_ending_or_eof] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == 'U') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(17);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != 127) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(33);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(62);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '3') ADVANCE(60);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(66);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(46);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(40);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__line_ending_or_eof = 0,
  ts_external_token__multiline_basic_string_content = 1,
  ts_external_token__multiline_basic_string_end = 2,
  ts_external_token__multiline_literal_string_content = 3,
  ts_external_token__multiline_literal_string_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_ending_or_eof] = sym__line_ending_or_eof,
  [ts_external_token__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [ts_external_token__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [ts_external_token__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [ts_external_token__multiline_literal_string_end] = sym__multiline_literal_string_end,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_ending_or_eof] = true,
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [sym__line_ending_or_eof] = ACTIONS(1),
    [sym__multiline_basic_string_content] = ACTIONS(1),
    [sym__multiline_basic_string_end] = ACTIONS(1),
    [sym__multiline_literal_string_content] = ACTIONS(1),
    [sym__multiline_literal_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_comment] = STATE(1),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
  [10] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dotenv_external_scanner_create(void);
void tree_sitter_dotenv_external_scanner_destroy(void *);
bool tree_sitter_dotenv_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dotenv_external_scanner_serialize(void *, char *);
void tree_sitter_dotenv_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dotenv(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dotenv_external_scanner_create,
      tree_sitter_dotenv_external_scanner_destroy,
      tree_sitter_dotenv_external_scanner_scan,
      tree_sitter_dotenv_external_scanner_serialize,
      tree_sitter_dotenv_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
