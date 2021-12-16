#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 251
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_NONE = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_variable = 8,
  anon_sym_SLASHtcp = 9,
  anon_sym_SLASHudp = 10,
  anon_sym_AT = 11,
  anon_sym_DASH_DASH = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_BSLASH_LF = 16,
  anon_sym_POUND = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_BSLASH = 19,
  sym_escape_sequence = 20,
  sym_non_newline_whitespace = 21,
  sym_comment = 22,
  sym_semgrep_ellipsis = 23,
  sym_imm_tok_pat_24a1611 = 24,
  sym_imm_tok_pat_3d340f6 = 25,
  sym_imm_tok_pat_589b0f8 = 26,
  sym_imm_tok_pat_bcfc287 = 27,
  sym_imm_tok_pat_d2727a0 = 28,
  sym_imm_tok_pat_f43f746 = 29,
  sym_imm_tok_pat_f6e1de8 = 30,
  sym_pat_030af88 = 31,
  sym_pat_0c7fc22 = 32,
  sym_pat_1167a92 = 33,
  sym_pat_1c663f5 = 34,
  sym_pat_217c202 = 35,
  sym_pat_239fcac = 36,
  sym_pat_2b37705 = 37,
  sym_pat_4128122 = 38,
  sym_pat_433746d = 39,
  sym_pat_441cd81 = 40,
  sym_pat_4a2f38a = 41,
  sym_pat_4b81dfc = 42,
  sym_pat_4de4cb9 = 43,
  sym_pat_4fd4a56 = 44,
  sym_pat_56bd329 = 45,
  sym_pat_5cf3c2c = 46,
  sym_pat_5eaae97 = 47,
  sym_pat_660c06c = 48,
  sym_pat_79b8891 = 49,
  sym_pat_808c5a1 = 50,
  sym_pat_845d48b = 51,
  sym_pat_8713919 = 52,
  sym_pat_9374c10 = 53,
  sym_pat_9818882 = 54,
  sym_pat_985c208 = 55,
  sym_pat_9a14b5c = 56,
  sym_pat_9c0a769 = 57,
  sym_pat_a368b76 = 58,
  sym_pat_a6040bb = 59,
  sym_pat_aa82a08 = 60,
  sym_pat_ed84199 = 61,
  sym_pat_f05eb95 = 62,
  sym_pat_f2a2f8f = 63,
  sym_pat_fd0037e = 64,
  sym_source_file = 65,
  sym_instruction = 66,
  sym_from_instruction = 67,
  sym_run_instruction = 68,
  sym_cmd_instruction = 69,
  sym_label_instruction = 70,
  sym_expose_instruction = 71,
  sym_env_instruction = 72,
  sym_add_instruction = 73,
  sym_copy_instruction = 74,
  sym_entrypoint_instruction = 75,
  sym_volume_instruction = 76,
  sym_user_instruction = 77,
  sym_user_name_or_group = 78,
  sym_workdir_instruction = 79,
  sym_arg_instruction = 80,
  sym_onbuild_instruction = 81,
  sym_stopsignal_instruction = 82,
  sym_stopsignal_value = 83,
  sym_healthcheck_instruction = 84,
  sym_shell_instruction = 85,
  sym_maintainer_instruction = 86,
  sym_cross_build_instruction = 87,
  sym_path = 88,
  sym_expansion = 89,
  sym_env_pair = 90,
  sym_spaced_env_pair = 91,
  sym_env_key = 92,
  sym_expose_port = 93,
  sym_label_pair = 94,
  sym_image_spec = 95,
  sym_image_name = 96,
  sym_image_tag = 97,
  sym_image_digest = 98,
  sym_param = 99,
  sym_image_alias = 100,
  sym_string_array = 101,
  sym_shell_command = 102,
  sym_shell_fragment = 103,
  sym_line_continuation = 104,
  sym_required_line_continuation = 105,
  sym_comment_line = 106,
  sym_anon_comment = 107,
  sym_double_quoted_string = 108,
  sym_unquoted_string = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_label_instruction_repeat1 = 111,
  aux_sym_expose_instruction_repeat1 = 112,
  aux_sym_env_instruction_repeat1 = 113,
  aux_sym_volume_instruction_repeat1 = 114,
  aux_sym_user_name_or_group_repeat1 = 115,
  aux_sym_stopsignal_value_repeat1 = 116,
  aux_sym_healthcheck_instruction_repeat1 = 117,
  aux_sym_path_repeat1 = 118,
  aux_sym_image_name_repeat1 = 119,
  aux_sym_image_tag_repeat1 = 120,
  aux_sym_image_digest_repeat1 = 121,
  aux_sym_image_alias_repeat1 = 122,
  aux_sym_string_array_repeat1 = 123,
  aux_sym_shell_command_repeat1 = 124,
  aux_sym_shell_command_repeat2 = 125,
  aux_sym_shell_fragment_repeat1 = 126,
  aux_sym_double_quoted_string_repeat1 = 127,
  aux_sym_unquoted_string_repeat1 = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_NONE] = "NONE",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_imm_tok_pat_24a1611] = "imm_tok_pat_24a1611",
  [sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [sym_pat_030af88] = "pat_030af88",
  [sym_pat_0c7fc22] = "pat_0c7fc22",
  [sym_pat_1167a92] = "pat_1167a92",
  [sym_pat_1c663f5] = "pat_1c663f5",
  [sym_pat_217c202] = "pat_217c202",
  [sym_pat_239fcac] = "pat_239fcac",
  [sym_pat_2b37705] = "pat_2b37705",
  [sym_pat_4128122] = "pat_4128122",
  [sym_pat_433746d] = "pat_433746d",
  [sym_pat_441cd81] = "pat_441cd81",
  [sym_pat_4a2f38a] = "pat_4a2f38a",
  [sym_pat_4b81dfc] = "pat_4b81dfc",
  [sym_pat_4de4cb9] = "pat_4de4cb9",
  [sym_pat_4fd4a56] = "pat_4fd4a56",
  [sym_pat_56bd329] = "pat_56bd329",
  [sym_pat_5cf3c2c] = "pat_5cf3c2c",
  [sym_pat_5eaae97] = "pat_5eaae97",
  [sym_pat_660c06c] = "pat_660c06c",
  [sym_pat_79b8891] = "pat_79b8891",
  [sym_pat_808c5a1] = "pat_808c5a1",
  [sym_pat_845d48b] = "pat_845d48b",
  [sym_pat_8713919] = "pat_8713919",
  [sym_pat_9374c10] = "pat_9374c10",
  [sym_pat_9818882] = "pat_9818882",
  [sym_pat_985c208] = "pat_985c208",
  [sym_pat_9a14b5c] = "pat_9a14b5c",
  [sym_pat_9c0a769] = "pat_9c0a769",
  [sym_pat_a368b76] = "pat_a368b76",
  [sym_pat_a6040bb] = "pat_a6040bb",
  [sym_pat_aa82a08] = "pat_aa82a08",
  [sym_pat_ed84199] = "pat_ed84199",
  [sym_pat_f05eb95] = "pat_f05eb95",
  [sym_pat_f2a2f8f] = "pat_f2a2f8f",
  [sym_pat_fd0037e] = "pat_fd0037e",
  [sym_source_file] = "source_file",
  [sym_instruction] = "instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym_user_name_or_group] = "user_name_or_group",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym_stopsignal_value] = "stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym_env_pair] = "env_pair",
  [sym_spaced_env_pair] = "spaced_env_pair",
  [sym_env_key] = "env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [sym_comment_line] = "comment_line",
  [sym_anon_comment] = "anon_comment",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_user_name_or_group_repeat1] = "user_name_or_group_repeat1",
  [aux_sym_stopsignal_value_repeat1] = "stopsignal_value_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_NONE] = anon_sym_NONE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_imm_tok_pat_24a1611] = sym_imm_tok_pat_24a1611,
  [sym_imm_tok_pat_3d340f6] = sym_imm_tok_pat_3d340f6,
  [sym_imm_tok_pat_589b0f8] = sym_imm_tok_pat_589b0f8,
  [sym_imm_tok_pat_bcfc287] = sym_imm_tok_pat_bcfc287,
  [sym_imm_tok_pat_d2727a0] = sym_imm_tok_pat_d2727a0,
  [sym_imm_tok_pat_f43f746] = sym_imm_tok_pat_f43f746,
  [sym_imm_tok_pat_f6e1de8] = sym_imm_tok_pat_f6e1de8,
  [sym_pat_030af88] = sym_pat_030af88,
  [sym_pat_0c7fc22] = sym_pat_0c7fc22,
  [sym_pat_1167a92] = sym_pat_1167a92,
  [sym_pat_1c663f5] = sym_pat_1c663f5,
  [sym_pat_217c202] = sym_pat_217c202,
  [sym_pat_239fcac] = sym_pat_239fcac,
  [sym_pat_2b37705] = sym_pat_2b37705,
  [sym_pat_4128122] = sym_pat_4128122,
  [sym_pat_433746d] = sym_pat_433746d,
  [sym_pat_441cd81] = sym_pat_441cd81,
  [sym_pat_4a2f38a] = sym_pat_4a2f38a,
  [sym_pat_4b81dfc] = sym_pat_4b81dfc,
  [sym_pat_4de4cb9] = sym_pat_4de4cb9,
  [sym_pat_4fd4a56] = sym_pat_4fd4a56,
  [sym_pat_56bd329] = sym_pat_56bd329,
  [sym_pat_5cf3c2c] = sym_pat_5cf3c2c,
  [sym_pat_5eaae97] = sym_pat_5eaae97,
  [sym_pat_660c06c] = sym_pat_660c06c,
  [sym_pat_79b8891] = sym_pat_79b8891,
  [sym_pat_808c5a1] = sym_pat_808c5a1,
  [sym_pat_845d48b] = sym_pat_845d48b,
  [sym_pat_8713919] = sym_pat_8713919,
  [sym_pat_9374c10] = sym_pat_9374c10,
  [sym_pat_9818882] = sym_pat_9818882,
  [sym_pat_985c208] = sym_pat_985c208,
  [sym_pat_9a14b5c] = sym_pat_9a14b5c,
  [sym_pat_9c0a769] = sym_pat_9c0a769,
  [sym_pat_a368b76] = sym_pat_a368b76,
  [sym_pat_a6040bb] = sym_pat_a6040bb,
  [sym_pat_aa82a08] = sym_pat_aa82a08,
  [sym_pat_ed84199] = sym_pat_ed84199,
  [sym_pat_f05eb95] = sym_pat_f05eb95,
  [sym_pat_f2a2f8f] = sym_pat_f2a2f8f,
  [sym_pat_fd0037e] = sym_pat_fd0037e,
  [sym_source_file] = sym_source_file,
  [sym_instruction] = sym_instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym_user_name_or_group] = sym_user_name_or_group,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym_stopsignal_value] = sym_stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym_env_pair] = sym_env_pair,
  [sym_spaced_env_pair] = sym_spaced_env_pair,
  [sym_env_key] = sym_env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [sym_comment_line] = sym_comment_line,
  [sym_anon_comment] = sym_anon_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_user_name_or_group_repeat1] = aux_sym_user_name_or_group_repeat1,
  [aux_sym_stopsignal_value_repeat1] = aux_sym_stopsignal_value_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_non_newline_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_24a1611] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_030af88] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_1c663f5] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_217c202] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_239fcac] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_433746d] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4b81dfc] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_56bd329] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_5cf3c2c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_5eaae97] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_660c06c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_79b8891] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_808c5a1] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_845d48b] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9374c10] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9818882] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_985c208] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9c0a769] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_a368b76] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_a6040bb] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_aa82a08] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_ed84199] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_f05eb95] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_f2a2f8f] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_fd0037e] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_anon_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_user, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_name, 0},
    {field_value, 2},
  [9] =
    {field_key, 0},
    {field_value, 2},
  [11] =
    {field_as, 3},
  [12] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [15] =
    {field_default, 3},
    {field_name, 1},
  [17] =
    {field_group, 3},
    {field_user, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
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
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(180);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(194);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(194);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(223);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(210);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(191);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(242);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '$') ADVANCE(168);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(179);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_imm_tok_pat_3d340f6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-') ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(171);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_pat_030af88);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_pat_1167a92);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_pat_1167a92);
      if (lookahead == '\n') ADVANCE(180);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_660c06c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_845d48b);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_9374c10);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_9818882);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_985c208);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_9c0a769);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_a368b76);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_a6040bb);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_aa82a08);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_ed84199);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_pat_f05eb95);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_pat_f2a2f8f);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_pat_fd0037e);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 160},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 160},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 39},
  [75] = {.lex_state = 48},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 38},
  [102] = {.lex_state = 36},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 160},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 160},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 39},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 160},
  [118] = {.lex_state = 49},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 39},
  [121] = {.lex_state = 39},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 160},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 160},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 160},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 47},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 160},
  [145] = {.lex_state = 160},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 47},
  [148] = {.lex_state = 43},
  [149] = {.lex_state = 47},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 47},
  [152] = {.lex_state = 160},
  [153] = {.lex_state = 160},
  [154] = {.lex_state = 47},
  [155] = {.lex_state = 43},
  [156] = {.lex_state = 47},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 47},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 37},
  [161] = {.lex_state = 47},
  [162] = {.lex_state = 160},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 47},
  [165] = {.lex_state = 47},
  [166] = {.lex_state = 47},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 47},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 30},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 39},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 160},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 160},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 51},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 39},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 53},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 226},
  [205] = {.lex_state = 226},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 160},
  [209] = {.lex_state = 226},
  [210] = {.lex_state = 160},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 53},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 160},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 53},
  [218] = {.lex_state = 160},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 160},
  [221] = {.lex_state = 39},
  [222] = {.lex_state = 160},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 160},
  [225] = {.lex_state = 160},
  [226] = {.lex_state = 160},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 160},
  [229] = {.lex_state = 54},
  [230] = {.lex_state = 160},
  [231] = {.lex_state = 160},
  [232] = {.lex_state = 160},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 160},
  [235] = {.lex_state = 54},
  [236] = {.lex_state = 160},
  [237] = {.lex_state = 54},
  [238] = {.lex_state = 160},
  [239] = {.lex_state = 54},
  [240] = {.lex_state = 54},
  [241] = {.lex_state = 54},
  [242] = {.lex_state = 54},
  [243] = {.lex_state = 54},
  [244] = {.lex_state = 54},
  [245] = {.lex_state = 54},
  [246] = {.lex_state = 54},
  [247] = {.lex_state = 54},
  [248] = {.lex_state = 51},
  [249] = {.lex_state = 51},
  [250] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_imm_tok_pat_f43f746] = ACTIONS(1),
    [sym_pat_1167a92] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(197),
    [sym_instruction] = STATE(216),
    [sym_from_instruction] = STATE(214),
    [sym_run_instruction] = STATE(214),
    [sym_cmd_instruction] = STATE(214),
    [sym_label_instruction] = STATE(214),
    [sym_expose_instruction] = STATE(214),
    [sym_env_instruction] = STATE(214),
    [sym_add_instruction] = STATE(214),
    [sym_copy_instruction] = STATE(214),
    [sym_entrypoint_instruction] = STATE(214),
    [sym_volume_instruction] = STATE(214),
    [sym_user_instruction] = STATE(214),
    [sym_workdir_instruction] = STATE(214),
    [sym_arg_instruction] = STATE(214),
    [sym_onbuild_instruction] = STATE(214),
    [sym_stopsignal_instruction] = STATE(214),
    [sym_healthcheck_instruction] = STATE(214),
    [sym_shell_instruction] = STATE(214),
    [sym_maintainer_instruction] = STATE(214),
    [sym_cross_build_instruction] = STATE(214),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_semgrep_ellipsis] = ACTIONS(9),
    [sym_pat_030af88] = ACTIONS(11),
    [sym_pat_1c663f5] = ACTIONS(13),
    [sym_pat_239fcac] = ACTIONS(15),
    [sym_pat_433746d] = ACTIONS(17),
    [sym_pat_4a2f38a] = ACTIONS(19),
    [sym_pat_56bd329] = ACTIONS(21),
    [sym_pat_5cf3c2c] = ACTIONS(23),
    [sym_pat_5eaae97] = ACTIONS(25),
    [sym_pat_808c5a1] = ACTIONS(27),
    [sym_pat_9374c10] = ACTIONS(29),
    [sym_pat_9818882] = ACTIONS(31),
    [sym_pat_985c208] = ACTIONS(33),
    [sym_pat_9c0a769] = ACTIONS(35),
    [sym_pat_a368b76] = ACTIONS(37),
    [sym_pat_a6040bb] = ACTIONS(39),
    [sym_pat_aa82a08] = ACTIONS(41),
    [sym_pat_ed84199] = ACTIONS(43),
    [sym_pat_f2a2f8f] = ACTIONS(45),
    [sym_pat_fd0037e] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym_semgrep_ellipsis,
    ACTIONS(57), 1,
      sym_pat_030af88,
    ACTIONS(60), 1,
      sym_pat_1c663f5,
    ACTIONS(63), 1,
      sym_pat_239fcac,
    ACTIONS(66), 1,
      sym_pat_433746d,
    ACTIONS(69), 1,
      sym_pat_4a2f38a,
    ACTIONS(72), 1,
      sym_pat_56bd329,
    ACTIONS(75), 1,
      sym_pat_5cf3c2c,
    ACTIONS(78), 1,
      sym_pat_5eaae97,
    ACTIONS(81), 1,
      sym_pat_808c5a1,
    ACTIONS(84), 1,
      sym_pat_9374c10,
    ACTIONS(87), 1,
      sym_pat_9818882,
    ACTIONS(90), 1,
      sym_pat_985c208,
    ACTIONS(93), 1,
      sym_pat_9c0a769,
    ACTIONS(96), 1,
      sym_pat_a368b76,
    ACTIONS(99), 1,
      sym_pat_a6040bb,
    ACTIONS(102), 1,
      sym_pat_aa82a08,
    ACTIONS(105), 1,
      sym_pat_ed84199,
    ACTIONS(108), 1,
      sym_pat_f2a2f8f,
    ACTIONS(111), 1,
      sym_pat_fd0037e,
    STATE(216), 1,
      sym_instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(214), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [98] = 27,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_semgrep_ellipsis,
    ACTIONS(11), 1,
      sym_pat_030af88,
    ACTIONS(13), 1,
      sym_pat_1c663f5,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(17), 1,
      sym_pat_433746d,
    ACTIONS(19), 1,
      sym_pat_4a2f38a,
    ACTIONS(21), 1,
      sym_pat_56bd329,
    ACTIONS(23), 1,
      sym_pat_5cf3c2c,
    ACTIONS(25), 1,
      sym_pat_5eaae97,
    ACTIONS(27), 1,
      sym_pat_808c5a1,
    ACTIONS(29), 1,
      sym_pat_9374c10,
    ACTIONS(31), 1,
      sym_pat_9818882,
    ACTIONS(33), 1,
      sym_pat_985c208,
    ACTIONS(35), 1,
      sym_pat_9c0a769,
    ACTIONS(37), 1,
      sym_pat_a368b76,
    ACTIONS(39), 1,
      sym_pat_a6040bb,
    ACTIONS(41), 1,
      sym_pat_aa82a08,
    ACTIONS(43), 1,
      sym_pat_ed84199,
    ACTIONS(45), 1,
      sym_pat_f2a2f8f,
    ACTIONS(47), 1,
      sym_pat_fd0037e,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(216), 1,
      sym_instruction,
    STATE(214), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [198] = 24,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(9), 1,
      sym_semgrep_ellipsis,
    ACTIONS(11), 1,
      sym_pat_030af88,
    ACTIONS(13), 1,
      sym_pat_1c663f5,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(17), 1,
      sym_pat_433746d,
    ACTIONS(19), 1,
      sym_pat_4a2f38a,
    ACTIONS(21), 1,
      sym_pat_56bd329,
    ACTIONS(23), 1,
      sym_pat_5cf3c2c,
    ACTIONS(25), 1,
      sym_pat_5eaae97,
    ACTIONS(27), 1,
      sym_pat_808c5a1,
    ACTIONS(29), 1,
      sym_pat_9374c10,
    ACTIONS(31), 1,
      sym_pat_9818882,
    ACTIONS(33), 1,
      sym_pat_985c208,
    ACTIONS(35), 1,
      sym_pat_9c0a769,
    ACTIONS(37), 1,
      sym_pat_a368b76,
    ACTIONS(39), 1,
      sym_pat_a6040bb,
    ACTIONS(41), 1,
      sym_pat_aa82a08,
    ACTIONS(43), 1,
      sym_pat_ed84199,
    ACTIONS(45), 1,
      sym_pat_f2a2f8f,
    ACTIONS(47), 1,
      sym_pat_fd0037e,
    STATE(4), 1,
      sym_line_continuation,
    STATE(213), 1,
      sym_instruction,
    STATE(214), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [289] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(5), 1,
      sym_line_continuation,
    ACTIONS(49), 22,
      ts_builtin_sym_end,
      sym_comment,
      sym_semgrep_ellipsis,
      sym_pat_030af88,
      sym_pat_1c663f5,
      sym_pat_239fcac,
      sym_pat_433746d,
      sym_pat_4a2f38a,
      sym_pat_56bd329,
      sym_pat_5cf3c2c,
      sym_pat_5eaae97,
      sym_pat_808c5a1,
      sym_pat_9374c10,
      sym_pat_9818882,
      sym_pat_985c208,
      sym_pat_9c0a769,
      sym_pat_a368b76,
      sym_pat_a6040bb,
      sym_pat_aa82a08,
      sym_pat_ed84199,
      sym_pat_f2a2f8f,
      sym_pat_fd0037e,
  [320] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(118), 1,
      anon_sym_DASH_DASH,
    ACTIONS(120), 1,
      sym_pat_2b37705,
    STATE(6), 1,
      sym_line_continuation,
    STATE(11), 1,
      aux_sym_image_name_repeat1,
    STATE(44), 1,
      sym_image_name,
    STATE(46), 1,
      sym_param,
    STATE(49), 1,
      sym_expansion,
    STATE(150), 1,
      sym_image_spec,
  [351] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(66), 1,
      sym_expansion,
    ACTIONS(126), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(146), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [378] = 7,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      sym_pat_2b37705,
    ACTIONS(138), 1,
      sym_pat_79b8891,
    STATE(49), 1,
      sym_expansion,
    STATE(8), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(128), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [403] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(66), 1,
      sym_expansion,
    ACTIONS(126), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(194), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [430] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_shell_command_repeat1,
    STATE(85), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_comment_line,
    STATE(187), 1,
      sym_shell_fragment,
    STATE(202), 1,
      sym_anon_comment,
    ACTIONS(142), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [459] = 8,
    ACTIONS(120), 1,
      sym_pat_2b37705,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      sym_pat_79b8891,
    STATE(8), 1,
      aux_sym_image_name_repeat1,
    STATE(11), 1,
      sym_line_continuation,
    STATE(49), 1,
      sym_expansion,
    ACTIONS(144), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [486] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(154), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(172), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [513] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(66), 1,
      sym_expansion,
    ACTIONS(126), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(211), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [540] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_POUND,
    STATE(10), 1,
      aux_sym_shell_command_repeat1,
    STATE(14), 1,
      sym_line_continuation,
    STATE(85), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_comment_line,
    STATE(202), 1,
      sym_anon_comment,
    STATE(203), 1,
      sym_shell_fragment,
    ACTIONS(142), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [569] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_line_continuation,
    STATE(85), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(114), 1,
      sym_shell_fragment,
    ACTIONS(142), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(176), 2,
      sym_string_array,
      sym_shell_command,
  [593] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(160), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      sym_pat_845d48b,
    STATE(16), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(66), 1,
      sym_expansion,
    ACTIONS(126), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [619] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      sym_pat_4128122,
    ACTIONS(164), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(154), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [645] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_line_continuation,
    STATE(85), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(114), 1,
      sym_shell_fragment,
    ACTIONS(142), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(195), 2,
      sym_string_array,
      sym_shell_command,
  [669] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(172), 1,
      sym_pat_79b8891,
    STATE(19), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_image_tag_repeat1,
    STATE(57), 1,
      sym_expansion,
    ACTIONS(166), 2,
      anon_sym_LF,
      anon_sym_AT,
  [695] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      sym_pat_845d48b,
    STATE(66), 1,
      sym_expansion,
    ACTIONS(179), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [719] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(192), 1,
      sym_pat_79b8891,
    STATE(57), 1,
      sym_expansion,
    ACTIONS(184), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(21), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [743] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_line_continuation,
    STATE(85), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(114), 1,
      sym_shell_fragment,
    ACTIONS(142), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(185), 2,
      sym_string_array,
      sym_shell_command,
  [767] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      sym_pat_4128122,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(23), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [791] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      sym_pat_0c7fc22,
    STATE(93), 1,
      sym_expansion,
    ACTIONS(200), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [812] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(210), 1,
      anon_sym_DOLLAR,
    ACTIONS(212), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(214), 1,
      sym_pat_79b8891,
    STATE(25), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_image_digest_repeat1,
    STATE(91), 1,
      sym_expansion,
  [837] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_DASH_DASH,
    ACTIONS(220), 1,
      sym_pat_1167a92,
    STATE(26), 1,
      sym_line_continuation,
    STATE(63), 1,
      sym_expansion,
    STATE(84), 1,
      sym_param,
    STATE(175), 1,
      sym_path,
  [862] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(222), 1,
      anon_sym_NONE,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH,
    STATE(27), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(162), 1,
      sym_param,
    STATE(233), 1,
      sym_cmd_instruction,
  [887] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym_escape_sequence,
    ACTIONS(232), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(28), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(83), 1,
      sym_expansion,
  [912] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(29), 1,
      sym_line_continuation,
    ACTIONS(234), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(236), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [929] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      sym_escape_sequence,
    ACTIONS(232), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_line_continuation,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(83), 1,
      sym_expansion,
  [954] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(245), 1,
      sym_pat_217c202,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(130), 2,
      sym_expansion,
      sym_expose_port,
  [975] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(32), 1,
      sym_line_continuation,
    ACTIONS(248), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(250), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [992] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(254), 1,
      anon_sym_DOLLAR,
    ACTIONS(257), 1,
      sym_pat_660c06c,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(252), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(33), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1013] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      sym_escape_sequence,
    ACTIONS(232), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(83), 1,
      sym_expansion,
  [1038] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      sym_pat_1167a92,
    STATE(35), 1,
      sym_line_continuation,
    STATE(36), 1,
      sym_expansion,
    STATE(113), 1,
      sym_path,
    STATE(177), 1,
      sym_string_array,
  [1063] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      sym_pat_0c7fc22,
    STATE(36), 1,
      sym_line_continuation,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(93), 1,
      sym_expansion,
    ACTIONS(266), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1086] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      sym_escape_sequence,
    ACTIONS(232), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(37), 1,
      sym_line_continuation,
    STATE(83), 1,
      sym_expansion,
  [1111] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      sym_pat_0c7fc22,
    STATE(24), 1,
      aux_sym_path_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(93), 1,
      sym_expansion,
    ACTIONS(274), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1134] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_pat_660c06c,
    STATE(33), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(39), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1157] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      sym_escape_sequence,
    ACTIONS(232), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(83), 1,
      sym_expansion,
  [1182] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 1,
      anon_sym_DOLLAR,
    ACTIONS(288), 1,
      sym_pat_217c202,
    STATE(31), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(41), 1,
      sym_line_continuation,
    STATE(130), 2,
      sym_expansion,
      sym_expose_port,
  [1205] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(298), 1,
      sym_pat_79b8891,
    STATE(91), 1,
      sym_expansion,
    STATE(42), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1228] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      sym_escape_sequence,
    ACTIONS(232), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(83), 1,
      sym_expansion,
  [1253] = 8,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      sym_pat_79b8891,
    STATE(44), 1,
      sym_line_continuation,
    STATE(103), 1,
      sym_image_tag,
    STATE(173), 1,
      sym_image_digest,
  [1278] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_comment_line,
    STATE(202), 1,
      sym_anon_comment,
    ACTIONS(313), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(45), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1299] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      sym_pat_2b37705,
    STATE(11), 1,
      aux_sym_image_name_repeat1,
    STATE(44), 1,
      sym_image_name,
    STATE(46), 1,
      sym_line_continuation,
    STATE(49), 1,
      sym_expansion,
    STATE(171), 1,
      sym_image_spec,
  [1324] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      sym_escape_sequence,
    ACTIONS(323), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(83), 1,
      sym_expansion,
    STATE(47), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1347] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_DASH_DASH,
    ACTIONS(220), 1,
      sym_pat_1167a92,
    STATE(48), 1,
      sym_line_continuation,
    STATE(63), 1,
      sym_expansion,
    STATE(96), 1,
      sym_param,
    STATE(198), 1,
      sym_path,
  [1372] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_line_continuation,
    ACTIONS(326), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(328), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1389] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR,
    ACTIONS(332), 1,
      sym_non_newline_whitespace,
    ACTIONS(334), 1,
      sym_pat_0c7fc22,
    STATE(50), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_path_repeat1,
    STATE(115), 1,
      sym_expansion,
  [1411] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(338), 1,
      sym_pat_441cd81,
    STATE(51), 1,
      sym_line_continuation,
    STATE(52), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(116), 1,
      sym_expansion,
    STATE(179), 1,
      sym_stopsignal_value,
  [1433] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 1,
      sym_pat_441cd81,
    STATE(52), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(116), 1,
      sym_expansion,
  [1455] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(344), 1,
      sym_pat_660c06c,
    STATE(39), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_expansion,
    STATE(141), 1,
      sym_user_name_or_group,
  [1477] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    ACTIONS(348), 1,
      sym_pat_9a14b5c,
    STATE(54), 1,
      sym_line_continuation,
    STATE(59), 1,
      aux_sym_image_alias_repeat1,
    STATE(135), 1,
      sym_expansion,
    STATE(183), 1,
      sym_image_alias,
  [1499] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(248), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1515] = 5,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(350), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
    ACTIONS(354), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1533] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(57), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(358), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1549] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(58), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(248), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1565] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      anon_sym_DOLLAR,
    ACTIONS(364), 1,
      sym_pat_9a14b5c,
    STATE(59), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_image_alias_repeat1,
    STATE(135), 1,
      sym_expansion,
  [1587] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      anon_sym_DOLLAR,
    ACTIONS(368), 1,
      sym_pat_217c202,
    STATE(41), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(130), 2,
      sym_expansion,
      sym_expose_port,
  [1607] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(61), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(234), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1623] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(62), 1,
      sym_line_continuation,
    ACTIONS(248), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(250), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1639] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      sym_pat_0c7fc22,
    ACTIONS(370), 1,
      sym_non_newline_whitespace,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(115), 1,
      sym_expansion,
  [1661] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(248), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(250), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1677] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      sym_pat_9a14b5c,
    STATE(135), 1,
      sym_expansion,
    STATE(65), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1697] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_line_continuation,
    ACTIONS(382), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(380), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1713] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(386), 1,
      anon_sym_DOLLAR,
    ACTIONS(389), 1,
      sym_pat_441cd81,
    STATE(116), 1,
      sym_expansion,
    STATE(67), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [1733] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(68), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(234), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1749] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(344), 1,
      sym_pat_660c06c,
    STATE(39), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(69), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_expansion,
    STATE(192), 1,
      sym_user_name_or_group,
  [1771] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    ACTIONS(348), 1,
      sym_pat_9a14b5c,
    STATE(59), 1,
      aux_sym_image_alias_repeat1,
    STATE(70), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym_expansion,
    STATE(199), 1,
      sym_image_alias,
  [1793] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(234), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(236), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1809] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH,
    STATE(72), 1,
      sym_line_continuation,
    STATE(106), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(162), 1,
      sym_param,
    STATE(219), 1,
      sym_cmd_instruction,
  [1831] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(382), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(380), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1847] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(392), 1,
      anon_sym_DOLLAR,
    ACTIONS(395), 1,
      sym_non_newline_whitespace,
    ACTIONS(397), 1,
      sym_pat_0c7fc22,
    STATE(115), 1,
      sym_expansion,
    STATE(74), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1867] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      sym_pat_845d48b,
    STATE(75), 1,
      sym_line_continuation,
    STATE(79), 1,
      aux_sym_env_instruction_repeat1,
    STATE(148), 1,
      sym_env_key,
    STATE(157), 1,
      sym_env_pair,
    STATE(186), 1,
      sym_spaced_env_pair,
  [1889] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(234), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(236), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1905] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      sym_pat_845d48b,
    STATE(157), 1,
      sym_env_pair,
    STATE(231), 1,
      sym_env_key,
    STATE(77), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1925] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      sym_pat_0c7fc22,
    STATE(78), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(110), 1,
      sym_expansion,
  [1947] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      sym_pat_845d48b,
    STATE(77), 1,
      aux_sym_env_instruction_repeat1,
    STATE(79), 1,
      sym_line_continuation,
    STATE(157), 1,
      sym_env_pair,
    STATE(231), 1,
      sym_env_key,
  [1969] = 7,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      sym_pat_0c7fc22,
    STATE(80), 1,
      sym_line_continuation,
    STATE(81), 1,
      aux_sym_path_repeat1,
    STATE(110), 1,
      sym_expansion,
  [1991] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      sym_pat_0c7fc22,
    STATE(110), 1,
      sym_expansion,
    STATE(81), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2011] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(421), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(423), 2,
      anon_sym_DOLLAR,
      sym_pat_660c06c,
  [2026] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(427), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(425), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2041] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(220), 1,
      sym_pat_1167a92,
    STATE(63), 1,
      sym_expansion,
    STATE(84), 1,
      sym_line_continuation,
    STATE(221), 1,
      sym_path,
  [2060] = 5,
    ACTIONS(429), 1,
      anon_sym_LF,
    ACTIONS(431), 1,
      anon_sym_BSLASH_LF,
    STATE(85), 1,
      sym_line_continuation,
    STATE(98), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(433), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2077] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      sym_pat_4128122,
    STATE(86), 1,
      sym_line_continuation,
    STATE(99), 1,
      aux_sym_label_instruction_repeat1,
    STATE(137), 1,
      sym_label_pair,
  [2096] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(236), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2109] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      anon_sym_DOLLAR,
    ACTIONS(441), 1,
      sym_pat_1167a92,
    STATE(78), 1,
      sym_expansion,
    STATE(88), 1,
      sym_line_continuation,
    STATE(174), 1,
      sym_path,
  [2128] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      anon_sym_DOLLAR,
    ACTIONS(441), 1,
      sym_pat_1167a92,
    STATE(78), 1,
      sym_expansion,
    STATE(89), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym_path,
  [2147] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(250), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2160] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(443), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(445), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2175] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(250), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2190] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(447), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2203] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(262), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(94), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym_path,
  [2222] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(236), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2237] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(220), 1,
      sym_pat_1167a92,
    STATE(63), 1,
      sym_expansion,
    STATE(96), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym_path,
  [2256] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      anon_sym_DOLLAR,
    ACTIONS(441), 1,
      sym_pat_1167a92,
    STATE(78), 1,
      sym_expansion,
    STATE(97), 1,
      sym_line_continuation,
    STATE(207), 1,
      sym_path,
  [2275] = 4,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(98), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2290] = 5,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      sym_pat_4128122,
    STATE(137), 1,
      sym_label_pair,
    STATE(99), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2307] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      anon_sym_DOLLAR,
    ACTIONS(441), 1,
      sym_pat_1167a92,
    STATE(78), 1,
      sym_expansion,
    STATE(100), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_path,
  [2326] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(170), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(461), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      aux_sym_image_tag_repeat1,
    STATE(57), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
  [2345] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      aux_sym_image_digest_repeat1,
    STATE(91), 1,
      sym_expansion,
    STATE(102), 1,
      sym_line_continuation,
  [2364] = 6,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(306), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      sym_pat_79b8891,
    STATE(103), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym_image_digest,
  [2383] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(234), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(236), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2398] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(248), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(250), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2413] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      anon_sym_DASH_DASH,
    ACTIONS(472), 1,
      sym_pat_239fcac,
    STATE(162), 1,
      sym_param,
    STATE(106), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2430] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      anon_sym_DOLLAR,
    ACTIONS(441), 1,
      sym_pat_1167a92,
    STATE(78), 1,
      sym_expansion,
    STATE(107), 1,
      sym_line_continuation,
    STATE(193), 1,
      sym_path,
  [2449] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2463] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(474), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2475] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(447), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2489] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_line_continuation,
    STATE(125), 1,
      sym_double_quoted_string,
  [2505] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(482), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(484), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2519] = 5,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      sym_non_newline_whitespace,
    STATE(113), 1,
      sym_line_continuation,
    STATE(133), 1,
      aux_sym_volume_instruction_repeat1,
  [2535] = 5,
    ACTIONS(490), 1,
      anon_sym_LF,
    ACTIONS(492), 1,
      anon_sym_BSLASH_LF,
    STATE(14), 1,
      sym_required_line_continuation,
    STATE(114), 1,
      sym_line_continuation,
    STATE(131), 1,
      aux_sym_shell_command_repeat2,
  [2551] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      sym_non_newline_whitespace,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(447), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2565] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(496), 2,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
  [2579] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(117), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [2593] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      sym_pat_4128122,
    STATE(86), 1,
      aux_sym_label_instruction_repeat1,
    STATE(118), 1,
      sym_line_continuation,
    STATE(137), 1,
      sym_label_pair,
  [2609] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2623] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      sym_non_newline_whitespace,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2637] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      sym_non_newline_whitespace,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2651] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2665] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_string_array_repeat1,
    STATE(123), 1,
      sym_line_continuation,
  [2681] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2695] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_string_array_repeat1,
    STATE(125), 1,
      sym_line_continuation,
  [2711] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 1,
      sym_non_newline_whitespace,
    STATE(126), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [2725] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2739] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2753] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(516), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2765] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(520), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2779] = 5,
    ACTIONS(492), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_required_line_continuation,
    STATE(131), 1,
      sym_line_continuation,
    STATE(132), 1,
      aux_sym_shell_command_repeat2,
  [2795] = 4,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      anon_sym_BSLASH_LF,
    STATE(14), 1,
      sym_required_line_continuation,
    STATE(132), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [2809] = 5,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(488), 1,
      sym_non_newline_whitespace,
    ACTIONS(529), 1,
      anon_sym_LF,
    STATE(126), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(133), 1,
      sym_line_continuation,
  [2825] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(531), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2837] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      anon_sym_LF,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(535), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2851] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2862] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      sym_pat_4128122,
    STATE(137), 1,
      sym_line_continuation,
  [2875] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      anon_sym_EQ,
    STATE(138), 1,
      sym_line_continuation,
  [2888] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 1,
      sym_variable,
    STATE(139), 1,
      sym_line_continuation,
  [2901] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(511), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2912] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      anon_sym_COLON,
    STATE(141), 1,
      sym_line_continuation,
  [2925] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      sym_pat_79b8891,
    STATE(142), 1,
      sym_line_continuation,
  [2938] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym_string_array,
  [2951] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      sym_double_quoted_string,
    STATE(144), 1,
      sym_line_continuation,
  [2964] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2975] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      sym_pat_845d48b,
    STATE(146), 1,
      sym_line_continuation,
  [2988] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    ACTIONS(565), 1,
      sym_variable,
    STATE(147), 1,
      sym_line_continuation,
  [3001] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(567), 1,
      anon_sym_EQ,
    ACTIONS(569), 1,
      sym_imm_tok_pat_3d340f6,
    STATE(148), 1,
      sym_line_continuation,
  [3014] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
    ACTIONS(573), 1,
      sym_variable,
    STATE(149), 1,
      sym_line_continuation,
  [3027] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      sym_pat_79b8891,
    STATE(150), 1,
      sym_line_continuation,
  [3040] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      sym_variable,
    STATE(151), 1,
      sym_line_continuation,
  [3053] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3064] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(585), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3075] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      sym_variable,
    STATE(154), 1,
      sym_line_continuation,
  [3088] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(591), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [3099] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    ACTIONS(595), 1,
      sym_variable,
    STATE(156), 1,
      sym_line_continuation,
  [3112] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(599), 1,
      sym_pat_845d48b,
    STATE(157), 1,
      sym_line_continuation,
  [3125] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      sym_variable,
    STATE(158), 1,
      sym_line_continuation,
  [3138] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      sym_pat_4128122,
    STATE(159), 1,
      sym_line_continuation,
  [3151] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(585), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      sym_pat_2b37705,
    STATE(160), 1,
      sym_line_continuation,
  [3164] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      sym_variable,
    STATE(161), 1,
      sym_line_continuation,
  [3177] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(613), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3188] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      sym_pat_4128122,
    STATE(163), 1,
      sym_line_continuation,
  [3201] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      sym_variable,
    STATE(164), 1,
      sym_line_continuation,
  [3214] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      sym_variable,
    STATE(165), 1,
      sym_line_continuation,
  [3227] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
    ACTIONS(627), 1,
      sym_variable,
    STATE(166), 1,
      sym_line_continuation,
  [3240] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      sym_pat_845d48b,
    STATE(167), 1,
      sym_line_continuation,
  [3253] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    ACTIONS(631), 1,
      sym_variable,
    STATE(168), 1,
      sym_line_continuation,
  [3266] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      sym_pat_845d48b,
    STATE(169), 1,
      sym_line_continuation,
  [3279] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(585), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      sym_pat_1167a92,
    STATE(170), 1,
      sym_line_continuation,
  [3292] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      sym_pat_79b8891,
    STATE(171), 1,
      sym_line_continuation,
  [3305] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      sym_pat_4128122,
    STATE(172), 1,
      sym_line_continuation,
  [3318] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(641), 1,
      anon_sym_LF,
    ACTIONS(643), 1,
      sym_pat_79b8891,
    STATE(173), 1,
      sym_line_continuation,
  [3331] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      anon_sym_LF,
    STATE(174), 1,
      sym_line_continuation,
  [3341] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(647), 1,
      sym_non_newline_whitespace,
    STATE(175), 1,
      sym_line_continuation,
  [3351] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_line_continuation,
  [3361] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_LF,
    STATE(177), 1,
      sym_line_continuation,
  [3371] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(178), 1,
      sym_line_continuation,
  [3381] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_line_continuation,
  [3391] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_line_continuation,
  [3401] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(181), 1,
      sym_line_continuation,
  [3411] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_line_continuation,
  [3421] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_line_continuation,
  [3431] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_line_continuation,
  [3441] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_line_continuation,
  [3451] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_line_continuation,
  [3461] = 3,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      anon_sym_BSLASH_LF,
    STATE(187), 1,
      sym_line_continuation,
  [3471] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
  [3481] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
  [3491] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      sym_imm_tok_pat_f43f746,
    STATE(190), 1,
      sym_line_continuation,
  [3501] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(677), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_line_continuation,
  [3511] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
  [3521] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_line_continuation,
  [3531] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
  [3541] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
  [3551] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
  [3561] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(689), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym_line_continuation,
  [3571] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(691), 1,
      sym_non_newline_whitespace,
    STATE(198), 1,
      sym_line_continuation,
  [3581] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
  [3591] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(695), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(200), 1,
      sym_line_continuation,
  [3601] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      sym_pat_4de4cb9,
    STATE(201), 1,
      sym_line_continuation,
  [3611] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
  [3621] = 3,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(701), 1,
      anon_sym_BSLASH_LF,
    STATE(203), 1,
      sym_line_continuation,
  [3631] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(703), 1,
      sym_pat_4fd4a56,
    STATE(204), 1,
      sym_line_continuation,
  [3641] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      sym_pat_4fd4a56,
    STATE(205), 1,
      sym_line_continuation,
  [3651] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(707), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_line_continuation,
  [3661] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_line_continuation,
  [3671] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_line_continuation,
  [3681] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(713), 1,
      sym_pat_4fd4a56,
    STATE(209), 1,
      sym_line_continuation,
  [3691] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym_line_continuation,
  [3701] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_line_continuation,
  [3711] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(212), 1,
      sym_line_continuation,
  [3721] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(721), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_line_continuation,
  [3731] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_line_continuation,
  [3741] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_line_continuation,
  [3751] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(727), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_line_continuation,
  [3761] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(217), 1,
      sym_line_continuation,
  [3771] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_line_continuation,
  [3781] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_LF,
    STATE(219), 1,
      sym_line_continuation,
  [3791] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_line_continuation,
  [3801] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(737), 1,
      sym_non_newline_whitespace,
    STATE(221), 1,
      sym_line_continuation,
  [3811] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_line_continuation,
  [3821] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(741), 1,
      sym_non_newline_whitespace,
    STATE(223), 1,
      sym_line_continuation,
  [3831] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_line_continuation,
  [3841] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(745), 1,
      anon_sym_EQ,
    STATE(225), 1,
      sym_line_continuation,
  [3851] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_line_continuation,
  [3861] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(227), 1,
      sym_line_continuation,
  [3871] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_line_continuation,
  [3881] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      sym_pat_8713919,
    STATE(229), 1,
      sym_line_continuation,
  [3891] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_line_continuation,
  [3901] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(567), 1,
      anon_sym_EQ,
    STATE(231), 1,
      sym_line_continuation,
  [3911] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_line_continuation,
  [3921] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [3931] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_line_continuation,
  [3941] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      sym_pat_8713919,
    STATE(235), 1,
      sym_line_continuation,
  [3951] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      anon_sym_EQ,
    STATE(236), 1,
      sym_line_continuation,
  [3961] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(767), 1,
      sym_pat_8713919,
    STATE(237), 1,
      sym_line_continuation,
  [3971] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_line_continuation,
  [3981] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(771), 1,
      sym_pat_8713919,
    STATE(239), 1,
      sym_line_continuation,
  [3991] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      sym_pat_8713919,
    STATE(240), 1,
      sym_line_continuation,
  [4001] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(775), 1,
      sym_pat_8713919,
    STATE(241), 1,
      sym_line_continuation,
  [4011] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      sym_pat_8713919,
    STATE(242), 1,
      sym_line_continuation,
  [4021] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(779), 1,
      sym_pat_8713919,
    STATE(243), 1,
      sym_line_continuation,
  [4031] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      sym_pat_8713919,
    STATE(244), 1,
      sym_line_continuation,
  [4041] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      sym_pat_8713919,
    STATE(245), 1,
      sym_line_continuation,
  [4051] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(785), 1,
      sym_pat_8713919,
    STATE(246), 1,
      sym_line_continuation,
  [4061] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      sym_pat_8713919,
    STATE(247), 1,
      sym_line_continuation,
  [4071] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(789), 1,
      sym_imm_tok_pat_f43f746,
    STATE(248), 1,
      sym_line_continuation,
  [4081] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      sym_imm_tok_pat_f43f746,
    STATE(249), 1,
      sym_line_continuation,
  [4091] = 1,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 198,
  [SMALL_STATE(5)] = 289,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 351,
  [SMALL_STATE(8)] = 378,
  [SMALL_STATE(9)] = 403,
  [SMALL_STATE(10)] = 430,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 486,
  [SMALL_STATE(13)] = 513,
  [SMALL_STATE(14)] = 540,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 619,
  [SMALL_STATE(18)] = 645,
  [SMALL_STATE(19)] = 669,
  [SMALL_STATE(20)] = 695,
  [SMALL_STATE(21)] = 719,
  [SMALL_STATE(22)] = 743,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 791,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 837,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 887,
  [SMALL_STATE(29)] = 912,
  [SMALL_STATE(30)] = 929,
  [SMALL_STATE(31)] = 954,
  [SMALL_STATE(32)] = 975,
  [SMALL_STATE(33)] = 992,
  [SMALL_STATE(34)] = 1013,
  [SMALL_STATE(35)] = 1038,
  [SMALL_STATE(36)] = 1063,
  [SMALL_STATE(37)] = 1086,
  [SMALL_STATE(38)] = 1111,
  [SMALL_STATE(39)] = 1134,
  [SMALL_STATE(40)] = 1157,
  [SMALL_STATE(41)] = 1182,
  [SMALL_STATE(42)] = 1205,
  [SMALL_STATE(43)] = 1228,
  [SMALL_STATE(44)] = 1253,
  [SMALL_STATE(45)] = 1278,
  [SMALL_STATE(46)] = 1299,
  [SMALL_STATE(47)] = 1324,
  [SMALL_STATE(48)] = 1347,
  [SMALL_STATE(49)] = 1372,
  [SMALL_STATE(50)] = 1389,
  [SMALL_STATE(51)] = 1411,
  [SMALL_STATE(52)] = 1433,
  [SMALL_STATE(53)] = 1455,
  [SMALL_STATE(54)] = 1477,
  [SMALL_STATE(55)] = 1499,
  [SMALL_STATE(56)] = 1515,
  [SMALL_STATE(57)] = 1533,
  [SMALL_STATE(58)] = 1549,
  [SMALL_STATE(59)] = 1565,
  [SMALL_STATE(60)] = 1587,
  [SMALL_STATE(61)] = 1607,
  [SMALL_STATE(62)] = 1623,
  [SMALL_STATE(63)] = 1639,
  [SMALL_STATE(64)] = 1661,
  [SMALL_STATE(65)] = 1677,
  [SMALL_STATE(66)] = 1697,
  [SMALL_STATE(67)] = 1713,
  [SMALL_STATE(68)] = 1733,
  [SMALL_STATE(69)] = 1749,
  [SMALL_STATE(70)] = 1771,
  [SMALL_STATE(71)] = 1793,
  [SMALL_STATE(72)] = 1809,
  [SMALL_STATE(73)] = 1831,
  [SMALL_STATE(74)] = 1847,
  [SMALL_STATE(75)] = 1867,
  [SMALL_STATE(76)] = 1889,
  [SMALL_STATE(77)] = 1905,
  [SMALL_STATE(78)] = 1925,
  [SMALL_STATE(79)] = 1947,
  [SMALL_STATE(80)] = 1969,
  [SMALL_STATE(81)] = 1991,
  [SMALL_STATE(82)] = 2011,
  [SMALL_STATE(83)] = 2026,
  [SMALL_STATE(84)] = 2041,
  [SMALL_STATE(85)] = 2060,
  [SMALL_STATE(86)] = 2077,
  [SMALL_STATE(87)] = 2096,
  [SMALL_STATE(88)] = 2109,
  [SMALL_STATE(89)] = 2128,
  [SMALL_STATE(90)] = 2147,
  [SMALL_STATE(91)] = 2160,
  [SMALL_STATE(92)] = 2175,
  [SMALL_STATE(93)] = 2190,
  [SMALL_STATE(94)] = 2203,
  [SMALL_STATE(95)] = 2222,
  [SMALL_STATE(96)] = 2237,
  [SMALL_STATE(97)] = 2256,
  [SMALL_STATE(98)] = 2275,
  [SMALL_STATE(99)] = 2290,
  [SMALL_STATE(100)] = 2307,
  [SMALL_STATE(101)] = 2326,
  [SMALL_STATE(102)] = 2345,
  [SMALL_STATE(103)] = 2364,
  [SMALL_STATE(104)] = 2383,
  [SMALL_STATE(105)] = 2398,
  [SMALL_STATE(106)] = 2413,
  [SMALL_STATE(107)] = 2430,
  [SMALL_STATE(108)] = 2449,
  [SMALL_STATE(109)] = 2463,
  [SMALL_STATE(110)] = 2475,
  [SMALL_STATE(111)] = 2489,
  [SMALL_STATE(112)] = 2505,
  [SMALL_STATE(113)] = 2519,
  [SMALL_STATE(114)] = 2535,
  [SMALL_STATE(115)] = 2551,
  [SMALL_STATE(116)] = 2565,
  [SMALL_STATE(117)] = 2579,
  [SMALL_STATE(118)] = 2593,
  [SMALL_STATE(119)] = 2609,
  [SMALL_STATE(120)] = 2623,
  [SMALL_STATE(121)] = 2637,
  [SMALL_STATE(122)] = 2651,
  [SMALL_STATE(123)] = 2665,
  [SMALL_STATE(124)] = 2681,
  [SMALL_STATE(125)] = 2695,
  [SMALL_STATE(126)] = 2711,
  [SMALL_STATE(127)] = 2725,
  [SMALL_STATE(128)] = 2739,
  [SMALL_STATE(129)] = 2753,
  [SMALL_STATE(130)] = 2765,
  [SMALL_STATE(131)] = 2779,
  [SMALL_STATE(132)] = 2795,
  [SMALL_STATE(133)] = 2809,
  [SMALL_STATE(134)] = 2825,
  [SMALL_STATE(135)] = 2837,
  [SMALL_STATE(136)] = 2851,
  [SMALL_STATE(137)] = 2862,
  [SMALL_STATE(138)] = 2875,
  [SMALL_STATE(139)] = 2888,
  [SMALL_STATE(140)] = 2901,
  [SMALL_STATE(141)] = 2912,
  [SMALL_STATE(142)] = 2925,
  [SMALL_STATE(143)] = 2938,
  [SMALL_STATE(144)] = 2951,
  [SMALL_STATE(145)] = 2964,
  [SMALL_STATE(146)] = 2975,
  [SMALL_STATE(147)] = 2988,
  [SMALL_STATE(148)] = 3001,
  [SMALL_STATE(149)] = 3014,
  [SMALL_STATE(150)] = 3027,
  [SMALL_STATE(151)] = 3040,
  [SMALL_STATE(152)] = 3053,
  [SMALL_STATE(153)] = 3064,
  [SMALL_STATE(154)] = 3075,
  [SMALL_STATE(155)] = 3088,
  [SMALL_STATE(156)] = 3099,
  [SMALL_STATE(157)] = 3112,
  [SMALL_STATE(158)] = 3125,
  [SMALL_STATE(159)] = 3138,
  [SMALL_STATE(160)] = 3151,
  [SMALL_STATE(161)] = 3164,
  [SMALL_STATE(162)] = 3177,
  [SMALL_STATE(163)] = 3188,
  [SMALL_STATE(164)] = 3201,
  [SMALL_STATE(165)] = 3214,
  [SMALL_STATE(166)] = 3227,
  [SMALL_STATE(167)] = 3240,
  [SMALL_STATE(168)] = 3253,
  [SMALL_STATE(169)] = 3266,
  [SMALL_STATE(170)] = 3279,
  [SMALL_STATE(171)] = 3292,
  [SMALL_STATE(172)] = 3305,
  [SMALL_STATE(173)] = 3318,
  [SMALL_STATE(174)] = 3331,
  [SMALL_STATE(175)] = 3341,
  [SMALL_STATE(176)] = 3351,
  [SMALL_STATE(177)] = 3361,
  [SMALL_STATE(178)] = 3371,
  [SMALL_STATE(179)] = 3381,
  [SMALL_STATE(180)] = 3391,
  [SMALL_STATE(181)] = 3401,
  [SMALL_STATE(182)] = 3411,
  [SMALL_STATE(183)] = 3421,
  [SMALL_STATE(184)] = 3431,
  [SMALL_STATE(185)] = 3441,
  [SMALL_STATE(186)] = 3451,
  [SMALL_STATE(187)] = 3461,
  [SMALL_STATE(188)] = 3471,
  [SMALL_STATE(189)] = 3481,
  [SMALL_STATE(190)] = 3491,
  [SMALL_STATE(191)] = 3501,
  [SMALL_STATE(192)] = 3511,
  [SMALL_STATE(193)] = 3521,
  [SMALL_STATE(194)] = 3531,
  [SMALL_STATE(195)] = 3541,
  [SMALL_STATE(196)] = 3551,
  [SMALL_STATE(197)] = 3561,
  [SMALL_STATE(198)] = 3571,
  [SMALL_STATE(199)] = 3581,
  [SMALL_STATE(200)] = 3591,
  [SMALL_STATE(201)] = 3601,
  [SMALL_STATE(202)] = 3611,
  [SMALL_STATE(203)] = 3621,
  [SMALL_STATE(204)] = 3631,
  [SMALL_STATE(205)] = 3641,
  [SMALL_STATE(206)] = 3651,
  [SMALL_STATE(207)] = 3661,
  [SMALL_STATE(208)] = 3671,
  [SMALL_STATE(209)] = 3681,
  [SMALL_STATE(210)] = 3691,
  [SMALL_STATE(211)] = 3701,
  [SMALL_STATE(212)] = 3711,
  [SMALL_STATE(213)] = 3721,
  [SMALL_STATE(214)] = 3731,
  [SMALL_STATE(215)] = 3741,
  [SMALL_STATE(216)] = 3751,
  [SMALL_STATE(217)] = 3761,
  [SMALL_STATE(218)] = 3771,
  [SMALL_STATE(219)] = 3781,
  [SMALL_STATE(220)] = 3791,
  [SMALL_STATE(221)] = 3801,
  [SMALL_STATE(222)] = 3811,
  [SMALL_STATE(223)] = 3821,
  [SMALL_STATE(224)] = 3831,
  [SMALL_STATE(225)] = 3841,
  [SMALL_STATE(226)] = 3851,
  [SMALL_STATE(227)] = 3861,
  [SMALL_STATE(228)] = 3871,
  [SMALL_STATE(229)] = 3881,
  [SMALL_STATE(230)] = 3891,
  [SMALL_STATE(231)] = 3901,
  [SMALL_STATE(232)] = 3911,
  [SMALL_STATE(233)] = 3921,
  [SMALL_STATE(234)] = 3931,
  [SMALL_STATE(235)] = 3941,
  [SMALL_STATE(236)] = 3951,
  [SMALL_STATE(237)] = 3961,
  [SMALL_STATE(238)] = 3971,
  [SMALL_STATE(239)] = 3981,
  [SMALL_STATE(240)] = 3991,
  [SMALL_STATE(241)] = 4001,
  [SMALL_STATE(242)] = 4011,
  [SMALL_STATE(243)] = 4021,
  [SMALL_STATE(244)] = 4031,
  [SMALL_STATE(245)] = 4041,
  [SMALL_STATE(246)] = 4051,
  [SMALL_STATE(247)] = 4061,
  [SMALL_STATE(248)] = 4071,
  [SMALL_STATE(249)] = 4081,
  [SMALL_STATE(250)] = 4091,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(161),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(49),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(158),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(66),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(165),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(57),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(149),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(73),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(154),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(93),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(164),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(56),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(147),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(82),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(139),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(91),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(204),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(156),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(83),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(83),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(151),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(135),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(147),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(116),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(166),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(115),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(178),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(168),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(110),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(98),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(182),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(249),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(144),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(94),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(134),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [689] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
