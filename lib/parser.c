#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 252
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
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
  sym_semgrep_metavariable = 23,
  sym_semgrep_ellipsis = 24,
  sym_imm_tok_pat_24a1611 = 25,
  sym_imm_tok_pat_3d340f6 = 26,
  sym_imm_tok_pat_589b0f8 = 27,
  sym_imm_tok_pat_bcfc287 = 28,
  sym_imm_tok_pat_d2727a0 = 29,
  sym_imm_tok_pat_f43f746 = 30,
  sym_imm_tok_pat_f6e1de8 = 31,
  sym_pat_030af88 = 32,
  sym_pat_0c7fc22 = 33,
  sym_pat_1167a92 = 34,
  sym_pat_1c663f5 = 35,
  sym_pat_217c202 = 36,
  sym_pat_239fcac = 37,
  sym_pat_2b37705 = 38,
  sym_pat_4128122 = 39,
  sym_pat_433746d = 40,
  sym_pat_441cd81 = 41,
  sym_pat_4a2f38a = 42,
  sym_pat_4b81dfc = 43,
  sym_pat_4de4cb9 = 44,
  sym_pat_4fd4a56 = 45,
  sym_pat_56bd329 = 46,
  sym_pat_5cf3c2c = 47,
  sym_pat_5eaae97 = 48,
  sym_pat_660c06c = 49,
  sym_pat_79b8891 = 50,
  sym_pat_808c5a1 = 51,
  sym_pat_845d48b = 52,
  sym_pat_8713919 = 53,
  sym_pat_9374c10 = 54,
  sym_pat_9818882 = 55,
  sym_pat_985c208 = 56,
  sym_pat_9a14b5c = 57,
  sym_pat_9c0a769 = 58,
  sym_pat_a368b76 = 59,
  sym_pat_a6040bb = 60,
  sym_pat_aa82a08 = 61,
  sym_pat_ed84199 = 62,
  sym_pat_f05eb95 = 63,
  sym_pat_f2a2f8f = 64,
  sym_pat_fd0037e = 65,
  sym_source_file = 66,
  sym_instruction = 67,
  sym_from_instruction = 68,
  sym_run_instruction = 69,
  sym_cmd_instruction = 70,
  sym_label_instruction = 71,
  sym_expose_instruction = 72,
  sym_env_instruction = 73,
  sym_add_instruction = 74,
  sym_copy_instruction = 75,
  sym_entrypoint_instruction = 76,
  sym_volume_instruction = 77,
  sym_user_instruction = 78,
  sym_user_name_or_group = 79,
  sym_workdir_instruction = 80,
  sym_arg_instruction = 81,
  sym_onbuild_instruction = 82,
  sym_stopsignal_instruction = 83,
  sym_stopsignal_value = 84,
  sym_healthcheck_instruction = 85,
  sym_shell_instruction = 86,
  sym_maintainer_instruction = 87,
  sym_cross_build_instruction = 88,
  sym_path = 89,
  sym_expansion = 90,
  sym_env_pair = 91,
  sym_spaced_env_pair = 92,
  sym_env_key = 93,
  sym_expose_port = 94,
  sym_label_pair = 95,
  sym_image_spec = 96,
  sym_image_name = 97,
  sym_image_tag = 98,
  sym_image_digest = 99,
  sym_param = 100,
  sym_image_alias = 101,
  sym_string_array = 102,
  sym_shell_command = 103,
  sym_shell_fragment = 104,
  sym_line_continuation = 105,
  sym_required_line_continuation = 106,
  sym_comment_line = 107,
  sym_anon_comment = 108,
  sym_double_quoted_string = 109,
  sym_unquoted_string = 110,
  sym_array_element = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_label_instruction_repeat1 = 113,
  aux_sym_expose_instruction_repeat1 = 114,
  aux_sym_env_instruction_repeat1 = 115,
  aux_sym_volume_instruction_repeat1 = 116,
  aux_sym_user_name_or_group_repeat1 = 117,
  aux_sym_stopsignal_value_repeat1 = 118,
  aux_sym_healthcheck_instruction_repeat1 = 119,
  aux_sym_path_repeat1 = 120,
  aux_sym_image_name_repeat1 = 121,
  aux_sym_image_tag_repeat1 = 122,
  aux_sym_image_digest_repeat1 = 123,
  aux_sym_image_alias_repeat1 = 124,
  aux_sym_string_array_repeat1 = 125,
  aux_sym_shell_command_repeat1 = 126,
  aux_sym_shell_command_repeat2 = 127,
  aux_sym_shell_fragment_repeat1 = 128,
  aux_sym_double_quoted_string_repeat1 = 129,
  aux_sym_unquoted_string_repeat1 = 130,
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
  [sym_semgrep_metavariable] = "semgrep_metavariable",
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
  [sym_array_element] = "array_element",
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
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
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
  [sym_array_element] = sym_array_element,
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
  [sym_semgrep_metavariable] = {
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
  [sym_array_element] = {
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
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(196);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(196);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(225);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(212);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(202);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
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
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(174);
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
          lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
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
          lookahead == 'g') ADVANCE(242);
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
          lookahead == 'k') ADVANCE(251);
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
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
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
          lookahead == 'm') ADVANCE(232);
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
          lookahead == 'n') ADVANCE(250);
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
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
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
          lookahead == 's') ADVANCE(234);
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
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(209);
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
          lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '}') ADVANCE(171);
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
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '}') ADVANCE(171);
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
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '_') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_imm_tok_pat_3d340f6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-') ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(172);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_pat_030af88);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_pat_1167a92);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_pat_1167a92);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_660c06c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_845d48b);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_9374c10);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_9818882);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_985c208);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_9c0a769);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_a368b76);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_a6040bb);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_pat_aa82a08);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_pat_ed84199);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_pat_f05eb95);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_pat_f2a2f8f);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_pat_fd0037e);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 161},
  [2] = {.lex_state = 161},
  [3] = {.lex_state = 161},
  [4] = {.lex_state = 161},
  [5] = {.lex_state = 161},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 161},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 161},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 161},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 161},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 26},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 25},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 161},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 40},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 161},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 40},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 161},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 26},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 161},
  [135] = {.lex_state = 49},
  [136] = {.lex_state = 15},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 48},
  [140] = {.lex_state = 161},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 48},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 161},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 22},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 48},
  [149] = {.lex_state = 48},
  [150] = {.lex_state = 48},
  [151] = {.lex_state = 48},
  [152] = {.lex_state = 48},
  [153] = {.lex_state = 161},
  [154] = {.lex_state = 48},
  [155] = {.lex_state = 161},
  [156] = {.lex_state = 23},
  [157] = {.lex_state = 20},
  [158] = {.lex_state = 161},
  [159] = {.lex_state = 48},
  [160] = {.lex_state = 161},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 38},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 48},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 48},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 30},
  [171] = {.lex_state = 22},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 53},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 161},
  [184] = {.lex_state = 161},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 40},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 40},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 40},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 161},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 52},
  [207] = {.lex_state = 54},
  [208] = {.lex_state = 228},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 228},
  [211] = {.lex_state = 161},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 53},
  [214] = {.lex_state = 51},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 161},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 53},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 161},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 161},
  [223] = {.lex_state = 228},
  [224] = {.lex_state = 161},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 161},
  [227] = {.lex_state = 161},
  [228] = {.lex_state = 161},
  [229] = {.lex_state = 161},
  [230] = {.lex_state = 161},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 161},
  [233] = {.lex_state = 40},
  [234] = {.lex_state = 161},
  [235] = {.lex_state = 51},
  [236] = {.lex_state = 161},
  [237] = {.lex_state = 54},
  [238] = {.lex_state = 161},
  [239] = {.lex_state = 54},
  [240] = {.lex_state = 161},
  [241] = {.lex_state = 54},
  [242] = {.lex_state = 54},
  [243] = {.lex_state = 54},
  [244] = {.lex_state = 54},
  [245] = {.lex_state = 54},
  [246] = {.lex_state = 54},
  [247] = {.lex_state = 54},
  [248] = {.lex_state = 54},
  [249] = {.lex_state = 54},
  [250] = {.lex_state = 51},
  [251] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(205),
    [sym_instruction] = STATE(217),
    [sym_from_instruction] = STATE(215),
    [sym_run_instruction] = STATE(215),
    [sym_cmd_instruction] = STATE(215),
    [sym_label_instruction] = STATE(215),
    [sym_expose_instruction] = STATE(215),
    [sym_env_instruction] = STATE(215),
    [sym_add_instruction] = STATE(215),
    [sym_copy_instruction] = STATE(215),
    [sym_entrypoint_instruction] = STATE(215),
    [sym_volume_instruction] = STATE(215),
    [sym_user_instruction] = STATE(215),
    [sym_workdir_instruction] = STATE(215),
    [sym_arg_instruction] = STATE(215),
    [sym_onbuild_instruction] = STATE(215),
    [sym_stopsignal_instruction] = STATE(215),
    [sym_healthcheck_instruction] = STATE(215),
    [sym_shell_instruction] = STATE(215),
    [sym_maintainer_instruction] = STATE(215),
    [sym_cross_build_instruction] = STATE(215),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_semgrep_metavariable] = ACTIONS(9),
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
    STATE(217), 1,
      sym_instruction,
    ACTIONS(54), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(215), 19,
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
  [99] = 27,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      sym_comment,
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
    STATE(217), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(215), 19,
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
  [200] = 24,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
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
    STATE(195), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(215), 19,
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
  [292] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(5), 1,
      sym_line_continuation,
    ACTIONS(49), 23,
      ts_builtin_sym_end,
      sym_comment,
      sym_semgrep_metavariable,
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
  [324] = 10,
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
    STATE(8), 1,
      aux_sym_image_name_repeat1,
    STATE(46), 1,
      sym_image_name,
    STATE(47), 1,
      sym_param,
    STATE(49), 1,
      sym_expansion,
    STATE(173), 1,
      sym_image_spec,
  [355] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_shell_command_repeat1,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym_comment_line,
    STATE(191), 1,
      sym_shell_fragment,
    STATE(219), 1,
      sym_anon_comment,
    ACTIONS(124), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [384] = 8,
    ACTIONS(120), 1,
      sym_pat_2b37705,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      sym_pat_79b8891,
    STATE(8), 1,
      sym_line_continuation,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(49), 1,
      sym_expansion,
    ACTIONS(126), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [411] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(63), 1,
      sym_expansion,
    ACTIONS(138), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(203), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [438] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      sym_pat_2b37705,
    ACTIONS(148), 1,
      sym_pat_79b8891,
    STATE(49), 1,
      sym_expansion,
    STATE(10), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(140), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [463] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(69), 1,
      sym_expansion,
    ACTIONS(154), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(156), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [490] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_POUND,
    STATE(7), 1,
      aux_sym_shell_command_repeat1,
    STATE(12), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym_comment_line,
    STATE(219), 1,
      sym_anon_comment,
    STATE(221), 1,
      sym_shell_fragment,
    ACTIONS(124), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [519] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(63), 1,
      sym_expansion,
    ACTIONS(138), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(167), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [546] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(63), 1,
      sym_expansion,
    ACTIONS(138), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(231), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [573] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(164), 1,
      sym_pat_79b8891,
    STATE(80), 1,
      sym_expansion,
    ACTIONS(156), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(15), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [597] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      sym_pat_4128122,
    STATE(16), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(69), 1,
      sym_expansion,
    ACTIONS(154), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [623] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(114), 1,
      sym_shell_fragment,
    ACTIONS(124), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(181), 2,
      sym_string_array,
      sym_shell_command,
  [647] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      sym_pat_845d48b,
    ACTIONS(174), 1,
      anon_sym_DOLLAR,
    STATE(18), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(63), 1,
      sym_expansion,
    ACTIONS(138), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [673] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      anon_sym_DOLLAR,
    ACTIONS(184), 1,
      sym_pat_4128122,
    STATE(69), 1,
      sym_expansion,
    ACTIONS(181), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(19), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [697] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      sym_pat_845d48b,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expansion,
    ACTIONS(189), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [721] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(198), 1,
      sym_pat_79b8891,
    STATE(15), 1,
      aux_sym_image_tag_repeat1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(80), 1,
      sym_expansion,
    ACTIONS(192), 2,
      anon_sym_LF,
      anon_sym_AT,
  [747] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(114), 1,
      sym_shell_fragment,
    ACTIONS(124), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(197), 2,
      sym_string_array,
      sym_shell_command,
  [771] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(114), 1,
      sym_shell_fragment,
    ACTIONS(124), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(187), 2,
      sym_string_array,
      sym_shell_command,
  [795] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_escape_sequence,
    ACTIONS(206), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(24), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(85), 1,
      sym_expansion,
  [820] = 8,
    ACTIONS(130), 1,
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
    STATE(50), 1,
      aux_sym_image_digest_repeat1,
    STATE(92), 1,
      sym_expansion,
  [845] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_escape_sequence,
    ACTIONS(206), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(85), 1,
      sym_expansion,
  [870] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      sym_pat_0c7fc22,
    STATE(27), 1,
      sym_line_continuation,
    STATE(39), 1,
      aux_sym_path_repeat1,
    STATE(86), 1,
      sym_expansion,
    ACTIONS(218), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [893] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_escape_sequence,
    ACTIONS(206), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
  [918] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      sym_pat_1167a92,
    STATE(29), 1,
      sym_line_continuation,
    STATE(34), 1,
      sym_expansion,
    STATE(129), 1,
      sym_path,
    STATE(188), 1,
      sym_string_array,
  [943] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(230), 1,
      anon_sym_NONE,
    ACTIONS(232), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(144), 1,
      sym_param,
    STATE(201), 1,
      sym_cmd_instruction,
  [968] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_DASH_DASH,
    ACTIONS(238), 1,
      sym_pat_1167a92,
    STATE(31), 1,
      sym_line_continuation,
    STATE(55), 1,
      sym_expansion,
    STATE(84), 1,
      sym_param,
    STATE(196), 1,
      sym_path,
  [993] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_escape_sequence,
    ACTIONS(206), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(85), 1,
      sym_expansion,
  [1018] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_array_element,
    STATE(140), 1,
      sym_double_quoted_string,
    ACTIONS(246), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1041] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      sym_pat_0c7fc22,
    STATE(27), 1,
      aux_sym_path_repeat1,
    STATE(34), 1,
      sym_line_continuation,
    STATE(86), 1,
      sym_expansion,
    ACTIONS(248), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1064] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(35), 1,
      sym_line_continuation,
    ACTIONS(250), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(252), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1081] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_escape_sequence,
    ACTIONS(206), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
  [1106] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      sym_pat_660c06c,
    STATE(105), 1,
      sym_expansion,
    ACTIONS(256), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1127] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(38), 1,
      sym_line_continuation,
    ACTIONS(264), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(266), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1144] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_pat_0c7fc22,
    STATE(86), 1,
      sym_expansion,
    ACTIONS(268), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(39), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1165] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_pat_660c06c,
    STATE(37), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(40), 1,
      sym_line_continuation,
    STATE(105), 1,
      sym_expansion,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1188] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_escape_sequence,
    ACTIONS(290), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(85), 1,
      sym_expansion,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1211] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym_comment_line,
    STATE(219), 1,
      sym_anon_comment,
    ACTIONS(296), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(42), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1232] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_DASH_DASH,
    ACTIONS(238), 1,
      sym_pat_1167a92,
    STATE(43), 1,
      sym_line_continuation,
    STATE(55), 1,
      sym_expansion,
    STATE(108), 1,
      sym_param,
    STATE(190), 1,
      sym_path,
  [1257] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      sym_pat_217c202,
    STATE(44), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(115), 2,
      sym_expansion,
      sym_expose_port,
  [1280] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_escape_sequence,
    ACTIONS(206), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
  [1305] = 8,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      sym_pat_79b8891,
    STATE(46), 1,
      sym_line_continuation,
    STATE(99), 1,
      sym_image_tag,
    STATE(138), 1,
      sym_image_digest,
  [1330] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      sym_pat_2b37705,
    STATE(8), 1,
      aux_sym_image_name_repeat1,
    STATE(46), 1,
      sym_image_name,
    STATE(47), 1,
      sym_line_continuation,
    STATE(49), 1,
      sym_expansion,
    STATE(157), 1,
      sym_image_spec,
  [1355] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      sym_pat_217c202,
    STATE(48), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(115), 2,
      sym_expansion,
      sym_expose_port,
  [1376] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_line_continuation,
    ACTIONS(322), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(324), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1393] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(334), 1,
      sym_pat_79b8891,
    STATE(92), 1,
      sym_expansion,
    STATE(50), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1416] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(51), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(264), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1432] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(52), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(266), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1448] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(338), 1,
      sym_non_newline_whitespace,
    ACTIONS(340), 1,
      sym_pat_0c7fc22,
    STATE(53), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_path_repeat1,
    STATE(112), 1,
      sym_expansion,
  [1470] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(54), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(266), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1486] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      sym_pat_0c7fc22,
    ACTIONS(342), 1,
      sym_non_newline_whitespace,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(55), 1,
      sym_line_continuation,
    STATE(112), 1,
      sym_expansion,
  [1508] = 5,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
    ACTIONS(348), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1526] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(350), 1,
      sym_pat_845d48b,
    STATE(57), 1,
      sym_line_continuation,
    STATE(78), 1,
      aux_sym_env_instruction_repeat1,
    STATE(146), 1,
      sym_env_pair,
    STATE(147), 1,
      sym_env_key,
    STATE(200), 1,
      sym_spaced_env_pair,
  [1548] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 1,
      sym_pat_441cd81,
    STATE(58), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(126), 1,
      sym_expansion,
  [1570] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(361), 1,
      sym_pat_9a14b5c,
    STATE(136), 1,
      sym_expansion,
    STATE(59), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1590] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(367), 1,
      sym_non_newline_whitespace,
    ACTIONS(369), 1,
      sym_pat_0c7fc22,
    STATE(112), 1,
      sym_expansion,
    STATE(60), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1610] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_660c06c,
    STATE(40), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(61), 1,
      sym_line_continuation,
    STATE(105), 1,
      sym_expansion,
    STATE(199), 1,
      sym_user_name_or_group,
  [1632] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      sym_pat_441cd81,
    STATE(58), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(62), 1,
      sym_line_continuation,
    STATE(126), 1,
      sym_expansion,
    STATE(177), 1,
      sym_stopsignal_value,
  [1654] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(380), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(378), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1670] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(252), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1686] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(65), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(252), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1702] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(384), 1,
      sym_pat_0c7fc22,
    STATE(66), 1,
      sym_line_continuation,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(113), 1,
      sym_expansion,
  [1724] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(386), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      sym_pat_217c202,
    STATE(44), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(67), 1,
      sym_line_continuation,
    STATE(115), 2,
      sym_expansion,
      sym_expose_port,
  [1744] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(392), 1,
      sym_pat_9a14b5c,
    STATE(68), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_image_alias_repeat1,
    STATE(136), 1,
      sym_expansion,
    STATE(212), 1,
      sym_image_alias,
  [1766] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(69), 1,
      sym_line_continuation,
    ACTIONS(380), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(378), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1782] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(392), 1,
      sym_pat_9a14b5c,
    STATE(70), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_image_alias_repeat1,
    STATE(136), 1,
      sym_expansion,
    STATE(189), 1,
      sym_image_alias,
  [1804] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      anon_sym_DOLLAR,
    ACTIONS(399), 1,
      sym_pat_441cd81,
    STATE(126), 1,
      sym_expansion,
    STATE(71), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [1824] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(232), 1,
      anon_sym_DASH_DASH,
    STATE(72), 1,
      sym_line_continuation,
    STATE(107), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(144), 1,
      sym_param,
    STATE(180), 1,
      sym_cmd_instruction,
  [1846] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(384), 1,
      sym_pat_0c7fc22,
    STATE(73), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_path_repeat1,
    STATE(113), 1,
      sym_expansion,
  [1868] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      anon_sym_DOLLAR,
    ACTIONS(405), 1,
      sym_pat_0c7fc22,
    STATE(113), 1,
      sym_expansion,
    STATE(74), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1888] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(264), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1904] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      sym_pat_660c06c,
    STATE(40), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(76), 1,
      sym_line_continuation,
    STATE(105), 1,
      sym_expansion,
    STATE(161), 1,
      sym_user_name_or_group,
  [1926] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      sym_pat_845d48b,
    STATE(146), 1,
      sym_env_pair,
    STATE(204), 1,
      sym_env_key,
    STATE(77), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1946] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      sym_pat_845d48b,
    STATE(77), 1,
      aux_sym_env_instruction_repeat1,
    STATE(78), 1,
      sym_line_continuation,
    STATE(146), 1,
      sym_env_pair,
    STATE(204), 1,
      sym_env_key,
  [1968] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym_double_quoted_string,
    STATE(155), 1,
      sym_array_element,
    ACTIONS(246), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1988] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(80), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(419), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [2004] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(252), 2,
      anon_sym_DOLLAR,
      sym_pat_845d48b,
    ACTIONS(250), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2020] = 7,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      sym_pat_9a14b5c,
    STATE(59), 1,
      aux_sym_image_alias_repeat1,
    STATE(82), 1,
      sym_line_continuation,
    STATE(136), 1,
      sym_expansion,
  [2042] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(252), 2,
      anon_sym_DOLLAR,
      sym_pat_4128122,
    ACTIONS(250), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2058] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      sym_pat_1167a92,
    STATE(55), 1,
      sym_expansion,
    STATE(84), 1,
      sym_line_continuation,
    STATE(202), 1,
      sym_path,
  [2077] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(429), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(427), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2092] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(431), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2105] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(435), 1,
      sym_pat_1167a92,
    STATE(66), 1,
      sym_expansion,
    STATE(87), 1,
      sym_line_continuation,
    STATE(198), 1,
      sym_path,
  [2124] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(266), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2139] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(435), 1,
      sym_pat_1167a92,
    STATE(66), 1,
      sym_expansion,
    STATE(89), 1,
      sym_line_continuation,
    STATE(194), 1,
      sym_path,
  [2158] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(266), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2171] = 4,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(91), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2186] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(446), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2201] = 5,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      sym_pat_4128122,
    STATE(169), 1,
      sym_label_pair,
    STATE(93), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2218] = 5,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(455), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(457), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2235] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(435), 1,
      sym_pat_1167a92,
    STATE(66), 1,
      sym_expansion,
    STATE(95), 1,
      sym_line_continuation,
    STATE(186), 1,
      sym_path,
  [2254] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      sym_pat_1167a92,
    STATE(34), 1,
      sym_expansion,
    STATE(96), 1,
      sym_line_continuation,
    STATE(137), 1,
      sym_path,
  [2273] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(252), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2288] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(250), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(252), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2303] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      sym_pat_79b8891,
    STATE(99), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym_image_digest,
  [2322] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(196), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    STATE(21), 1,
      aux_sym_image_tag_repeat1,
    STATE(80), 1,
      sym_expansion,
    STATE(100), 1,
      sym_line_continuation,
  [2341] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(435), 1,
      sym_pat_1167a92,
    STATE(66), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
    STATE(185), 1,
      sym_path,
  [2360] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(252), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2373] = 6,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      sym_pat_4128122,
    STATE(93), 1,
      aux_sym_label_instruction_repeat1,
    STATE(103), 1,
      sym_line_continuation,
    STATE(169), 1,
      sym_label_pair,
  [2392] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2407] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(469), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(471), 2,
      anon_sym_DOLLAR,
      sym_pat_660c06c,
  [2422] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(435), 1,
      sym_pat_1167a92,
    STATE(66), 1,
      sym_expansion,
    STATE(106), 1,
      sym_line_continuation,
    STATE(175), 1,
      sym_path,
  [2441] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(473), 1,
      anon_sym_DASH_DASH,
    ACTIONS(476), 1,
      sym_pat_239fcac,
    STATE(144), 1,
      sym_param,
    STATE(107), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2458] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      sym_pat_1167a92,
    STATE(55), 1,
      sym_expansion,
    STATE(108), 1,
      sym_line_continuation,
    STATE(233), 1,
      sym_path,
  [2477] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(478), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      aux_sym_image_digest_repeat1,
    STATE(92), 1,
      sym_expansion,
    STATE(109), 1,
      sym_line_continuation,
  [2496] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(482), 1,
      sym_non_newline_whitespace,
    STATE(110), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [2510] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(252), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2524] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      sym_non_newline_whitespace,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(431), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2538] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(431), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2552] = 5,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_BSLASH_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(114), 1,
      sym_line_continuation,
    STATE(125), 1,
      aux_sym_shell_command_repeat2,
  [2568] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(491), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(493), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2582] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(495), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(497), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2596] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(499), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2608] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2622] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(119), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [2636] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(252), 2,
      anon_sym_DOLLAR,
      sym_pat_217c202,
  [2650] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      sym_non_newline_whitespace,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2664] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      sym_non_newline_whitespace,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(252), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2678] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2692] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym_string_array_repeat1,
    STATE(124), 1,
      sym_line_continuation,
  [2708] = 5,
    ACTIONS(489), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(125), 1,
      sym_line_continuation,
    STATE(133), 1,
      aux_sym_shell_command_repeat2,
  [2724] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(512), 1,
      anon_sym_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(514), 2,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
  [2738] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(516), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2750] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(252), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2764] = 5,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(518), 1,
      anon_sym_LF,
    ACTIONS(520), 1,
      sym_non_newline_whitespace,
    STATE(129), 1,
      sym_line_continuation,
    STATE(132), 1,
      aux_sym_volume_instruction_repeat1,
  [2780] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(522), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2792] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2806] = 5,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      sym_non_newline_whitespace,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(110), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(132), 1,
      sym_line_continuation,
  [2822] = 4,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      anon_sym_BSLASH_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(133), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [2836] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_string_array_repeat1,
    STATE(134), 1,
      sym_line_continuation,
  [2852] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      sym_pat_4128122,
    STATE(103), 1,
      aux_sym_label_instruction_repeat1,
    STATE(135), 1,
      sym_line_continuation,
    STATE(169), 1,
      sym_label_pair,
  [2868] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2882] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(480), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2893] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      sym_pat_79b8891,
    STATE(138), 1,
      sym_line_continuation,
  [2906] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      sym_variable,
    STATE(139), 1,
      sym_line_continuation,
  [2919] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2930] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_line_continuation,
    STATE(182), 1,
      sym_string_array,
  [2943] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    ACTIONS(551), 1,
      sym_variable,
    STATE(142), 1,
      sym_line_continuation,
  [2956] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      sym_pat_79b8891,
    STATE(143), 1,
      sym_line_continuation,
  [2969] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [2980] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(559), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [2991] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      sym_pat_845d48b,
    STATE(146), 1,
      sym_line_continuation,
  [3004] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(567), 1,
      sym_imm_tok_pat_3d340f6,
    STATE(147), 1,
      sym_line_continuation,
  [3017] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    ACTIONS(571), 1,
      sym_variable,
    STATE(148), 1,
      sym_line_continuation,
  [3030] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      sym_variable,
    STATE(149), 1,
      sym_line_continuation,
  [3043] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    ACTIONS(579), 1,
      sym_variable,
    STATE(150), 1,
      sym_line_continuation,
  [3056] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(583), 1,
      sym_variable,
    STATE(151), 1,
      sym_line_continuation,
  [3069] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
    ACTIONS(587), 1,
      sym_variable,
    STATE(152), 1,
      sym_line_continuation,
  [3082] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3093] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(593), 1,
      sym_variable,
    STATE(154), 1,
      sym_line_continuation,
  [3106] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3117] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(595), 1,
      anon_sym_LF,
    ACTIONS(597), 1,
      sym_pat_4128122,
    STATE(156), 1,
      sym_line_continuation,
  [3130] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      sym_pat_79b8891,
    STATE(157), 1,
      sym_line_continuation,
  [3143] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3154] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(607), 1,
      sym_variable,
    STATE(159), 1,
      sym_line_continuation,
  [3167] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(609), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3178] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_line_continuation,
  [3191] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      sym_pat_2b37705,
    STATE(162), 1,
      sym_line_continuation,
  [3204] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      sym_pat_4128122,
    STATE(163), 1,
      sym_line_continuation,
  [3217] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(164), 1,
      sym_line_continuation,
  [3230] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
    ACTIONS(625), 1,
      sym_variable,
    STATE(165), 1,
      sym_line_continuation,
  [3243] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      sym_pat_4128122,
    STATE(166), 1,
      sym_line_continuation,
  [3256] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      sym_pat_845d48b,
    STATE(167), 1,
      sym_line_continuation,
  [3269] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    ACTIONS(635), 1,
      sym_variable,
    STATE(168), 1,
      sym_line_continuation,
  [3282] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      sym_pat_4128122,
    STATE(169), 1,
      sym_line_continuation,
  [3295] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      sym_pat_1167a92,
    STATE(170), 1,
      sym_line_continuation,
  [3308] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(617), 1,
      sym_pat_845d48b,
    STATE(171), 1,
      sym_line_continuation,
  [3321] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      sym_variable,
    STATE(172), 1,
      sym_line_continuation,
  [3334] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      sym_pat_79b8891,
    STATE(173), 1,
      sym_line_continuation,
  [3347] = 4,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      sym_pat_845d48b,
    STATE(174), 1,
      sym_line_continuation,
  [3360] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(175), 1,
      sym_line_continuation,
  [3370] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(176), 1,
      sym_line_continuation,
  [3380] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(177), 1,
      sym_line_continuation,
  [3390] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_line_continuation,
  [3400] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_line_continuation,
  [3410] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_line_continuation,
  [3420] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(181), 1,
      sym_line_continuation,
  [3430] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_line_continuation,
  [3440] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(665), 1,
      anon_sym_EQ,
    STATE(183), 1,
      sym_line_continuation,
  [3450] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(559), 1,
      anon_sym_EQ,
    STATE(184), 1,
      sym_line_continuation,
  [3460] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_line_continuation,
  [3470] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_line_continuation,
  [3480] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_line_continuation,
  [3490] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
  [3500] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
  [3510] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(677), 1,
      sym_non_newline_whitespace,
    STATE(190), 1,
      sym_line_continuation,
  [3520] = 3,
    ACTIONS(679), 1,
      anon_sym_LF,
    ACTIONS(681), 1,
      anon_sym_BSLASH_LF,
    STATE(191), 1,
      sym_line_continuation,
  [3530] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
  [3540] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_line_continuation,
  [3550] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
  [3560] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
  [3570] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(691), 1,
      sym_non_newline_whitespace,
    STATE(196), 1,
      sym_line_continuation,
  [3580] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
  [3590] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
  [3600] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
  [3610] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_line_continuation,
  [3620] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_line_continuation,
  [3630] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(701), 1,
      sym_non_newline_whitespace,
    STATE(202), 1,
      sym_line_continuation,
  [3640] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_line_continuation,
  [3650] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_EQ,
    STATE(204), 1,
      sym_line_continuation,
  [3660] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      ts_builtin_sym_end,
    STATE(205), 1,
      sym_line_continuation,
  [3670] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(707), 1,
      sym_pat_4de4cb9,
    STATE(206), 1,
      sym_line_continuation,
  [3680] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      sym_pat_8713919,
    STATE(207), 1,
      sym_line_continuation,
  [3690] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(711), 1,
      sym_pat_4fd4a56,
    STATE(208), 1,
      sym_line_continuation,
  [3700] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_line_continuation,
  [3710] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(715), 1,
      sym_pat_4fd4a56,
    STATE(210), 1,
      sym_line_continuation,
  [3720] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_line_continuation,
  [3730] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
  [3740] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(721), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(213), 1,
      sym_line_continuation,
  [3750] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      sym_imm_tok_pat_f43f746,
    STATE(214), 1,
      sym_line_continuation,
  [3760] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_line_continuation,
  [3770] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym_line_continuation,
  [3780] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_line_continuation,
  [3790] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(218), 1,
      sym_line_continuation,
  [3800] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_LF,
    STATE(219), 1,
      sym_line_continuation,
  [3810] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_line_continuation,
  [3820] = 3,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(737), 1,
      anon_sym_BSLASH_LF,
    STATE(221), 1,
      sym_line_continuation,
  [3830] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_line_continuation,
  [3840] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(741), 1,
      sym_pat_4fd4a56,
    STATE(223), 1,
      sym_line_continuation,
  [3850] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_line_continuation,
  [3860] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(745), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_line_continuation,
  [3870] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_line_continuation,
  [3880] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym_line_continuation,
  [3890] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_line_continuation,
  [3900] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_line_continuation,
  [3910] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_line_continuation,
  [3920] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      anon_sym_LF,
    STATE(231), 1,
      sym_line_continuation,
  [3930] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_line_continuation,
  [3940] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      sym_non_newline_whitespace,
    STATE(233), 1,
      sym_line_continuation,
  [3950] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_line_continuation,
  [3960] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      sym_imm_tok_pat_f43f746,
    STATE(235), 1,
      sym_line_continuation,
  [3970] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_line_continuation,
  [3980] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      sym_pat_8713919,
    STATE(237), 1,
      sym_line_continuation,
  [3990] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(771), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_line_continuation,
  [4000] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      sym_pat_8713919,
    STATE(239), 1,
      sym_line_continuation,
  [4010] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(775), 1,
      anon_sym_EQ,
    STATE(240), 1,
      sym_line_continuation,
  [4020] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      sym_pat_8713919,
    STATE(241), 1,
      sym_line_continuation,
  [4030] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(779), 1,
      sym_pat_8713919,
    STATE(242), 1,
      sym_line_continuation,
  [4040] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      sym_pat_8713919,
    STATE(243), 1,
      sym_line_continuation,
  [4050] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      sym_pat_8713919,
    STATE(244), 1,
      sym_line_continuation,
  [4060] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(785), 1,
      sym_pat_8713919,
    STATE(245), 1,
      sym_line_continuation,
  [4070] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      sym_pat_8713919,
    STATE(246), 1,
      sym_line_continuation,
  [4080] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(789), 1,
      sym_pat_8713919,
    STATE(247), 1,
      sym_line_continuation,
  [4090] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      sym_pat_8713919,
    STATE(248), 1,
      sym_line_continuation,
  [4100] = 3,
    ACTIONS(130), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(793), 1,
      sym_pat_8713919,
    STATE(249), 1,
      sym_line_continuation,
  [4110] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(795), 1,
      sym_imm_tok_pat_f43f746,
    STATE(250), 1,
      sym_line_continuation,
  [4120] = 1,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 355,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 411,
  [SMALL_STATE(10)] = 438,
  [SMALL_STATE(11)] = 463,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 519,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 597,
  [SMALL_STATE(17)] = 623,
  [SMALL_STATE(18)] = 647,
  [SMALL_STATE(19)] = 673,
  [SMALL_STATE(20)] = 697,
  [SMALL_STATE(21)] = 721,
  [SMALL_STATE(22)] = 747,
  [SMALL_STATE(23)] = 771,
  [SMALL_STATE(24)] = 795,
  [SMALL_STATE(25)] = 820,
  [SMALL_STATE(26)] = 845,
  [SMALL_STATE(27)] = 870,
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 918,
  [SMALL_STATE(30)] = 943,
  [SMALL_STATE(31)] = 968,
  [SMALL_STATE(32)] = 993,
  [SMALL_STATE(33)] = 1018,
  [SMALL_STATE(34)] = 1041,
  [SMALL_STATE(35)] = 1064,
  [SMALL_STATE(36)] = 1081,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1127,
  [SMALL_STATE(39)] = 1144,
  [SMALL_STATE(40)] = 1165,
  [SMALL_STATE(41)] = 1188,
  [SMALL_STATE(42)] = 1211,
  [SMALL_STATE(43)] = 1232,
  [SMALL_STATE(44)] = 1257,
  [SMALL_STATE(45)] = 1280,
  [SMALL_STATE(46)] = 1305,
  [SMALL_STATE(47)] = 1330,
  [SMALL_STATE(48)] = 1355,
  [SMALL_STATE(49)] = 1376,
  [SMALL_STATE(50)] = 1393,
  [SMALL_STATE(51)] = 1416,
  [SMALL_STATE(52)] = 1432,
  [SMALL_STATE(53)] = 1448,
  [SMALL_STATE(54)] = 1470,
  [SMALL_STATE(55)] = 1486,
  [SMALL_STATE(56)] = 1508,
  [SMALL_STATE(57)] = 1526,
  [SMALL_STATE(58)] = 1548,
  [SMALL_STATE(59)] = 1570,
  [SMALL_STATE(60)] = 1590,
  [SMALL_STATE(61)] = 1610,
  [SMALL_STATE(62)] = 1632,
  [SMALL_STATE(63)] = 1654,
  [SMALL_STATE(64)] = 1670,
  [SMALL_STATE(65)] = 1686,
  [SMALL_STATE(66)] = 1702,
  [SMALL_STATE(67)] = 1724,
  [SMALL_STATE(68)] = 1744,
  [SMALL_STATE(69)] = 1766,
  [SMALL_STATE(70)] = 1782,
  [SMALL_STATE(71)] = 1804,
  [SMALL_STATE(72)] = 1824,
  [SMALL_STATE(73)] = 1846,
  [SMALL_STATE(74)] = 1868,
  [SMALL_STATE(75)] = 1888,
  [SMALL_STATE(76)] = 1904,
  [SMALL_STATE(77)] = 1926,
  [SMALL_STATE(78)] = 1946,
  [SMALL_STATE(79)] = 1968,
  [SMALL_STATE(80)] = 1988,
  [SMALL_STATE(81)] = 2004,
  [SMALL_STATE(82)] = 2020,
  [SMALL_STATE(83)] = 2042,
  [SMALL_STATE(84)] = 2058,
  [SMALL_STATE(85)] = 2077,
  [SMALL_STATE(86)] = 2092,
  [SMALL_STATE(87)] = 2105,
  [SMALL_STATE(88)] = 2124,
  [SMALL_STATE(89)] = 2139,
  [SMALL_STATE(90)] = 2158,
  [SMALL_STATE(91)] = 2171,
  [SMALL_STATE(92)] = 2186,
  [SMALL_STATE(93)] = 2201,
  [SMALL_STATE(94)] = 2218,
  [SMALL_STATE(95)] = 2235,
  [SMALL_STATE(96)] = 2254,
  [SMALL_STATE(97)] = 2273,
  [SMALL_STATE(98)] = 2288,
  [SMALL_STATE(99)] = 2303,
  [SMALL_STATE(100)] = 2322,
  [SMALL_STATE(101)] = 2341,
  [SMALL_STATE(102)] = 2360,
  [SMALL_STATE(103)] = 2373,
  [SMALL_STATE(104)] = 2392,
  [SMALL_STATE(105)] = 2407,
  [SMALL_STATE(106)] = 2422,
  [SMALL_STATE(107)] = 2441,
  [SMALL_STATE(108)] = 2458,
  [SMALL_STATE(109)] = 2477,
  [SMALL_STATE(110)] = 2496,
  [SMALL_STATE(111)] = 2510,
  [SMALL_STATE(112)] = 2524,
  [SMALL_STATE(113)] = 2538,
  [SMALL_STATE(114)] = 2552,
  [SMALL_STATE(115)] = 2568,
  [SMALL_STATE(116)] = 2582,
  [SMALL_STATE(117)] = 2596,
  [SMALL_STATE(118)] = 2608,
  [SMALL_STATE(119)] = 2622,
  [SMALL_STATE(120)] = 2636,
  [SMALL_STATE(121)] = 2650,
  [SMALL_STATE(122)] = 2664,
  [SMALL_STATE(123)] = 2678,
  [SMALL_STATE(124)] = 2692,
  [SMALL_STATE(125)] = 2708,
  [SMALL_STATE(126)] = 2724,
  [SMALL_STATE(127)] = 2738,
  [SMALL_STATE(128)] = 2750,
  [SMALL_STATE(129)] = 2764,
  [SMALL_STATE(130)] = 2780,
  [SMALL_STATE(131)] = 2792,
  [SMALL_STATE(132)] = 2806,
  [SMALL_STATE(133)] = 2822,
  [SMALL_STATE(134)] = 2836,
  [SMALL_STATE(135)] = 2852,
  [SMALL_STATE(136)] = 2868,
  [SMALL_STATE(137)] = 2882,
  [SMALL_STATE(138)] = 2893,
  [SMALL_STATE(139)] = 2906,
  [SMALL_STATE(140)] = 2919,
  [SMALL_STATE(141)] = 2930,
  [SMALL_STATE(142)] = 2943,
  [SMALL_STATE(143)] = 2956,
  [SMALL_STATE(144)] = 2969,
  [SMALL_STATE(145)] = 2980,
  [SMALL_STATE(146)] = 2991,
  [SMALL_STATE(147)] = 3004,
  [SMALL_STATE(148)] = 3017,
  [SMALL_STATE(149)] = 3030,
  [SMALL_STATE(150)] = 3043,
  [SMALL_STATE(151)] = 3056,
  [SMALL_STATE(152)] = 3069,
  [SMALL_STATE(153)] = 3082,
  [SMALL_STATE(154)] = 3093,
  [SMALL_STATE(155)] = 3106,
  [SMALL_STATE(156)] = 3117,
  [SMALL_STATE(157)] = 3130,
  [SMALL_STATE(158)] = 3143,
  [SMALL_STATE(159)] = 3154,
  [SMALL_STATE(160)] = 3167,
  [SMALL_STATE(161)] = 3178,
  [SMALL_STATE(162)] = 3191,
  [SMALL_STATE(163)] = 3204,
  [SMALL_STATE(164)] = 3217,
  [SMALL_STATE(165)] = 3230,
  [SMALL_STATE(166)] = 3243,
  [SMALL_STATE(167)] = 3256,
  [SMALL_STATE(168)] = 3269,
  [SMALL_STATE(169)] = 3282,
  [SMALL_STATE(170)] = 3295,
  [SMALL_STATE(171)] = 3308,
  [SMALL_STATE(172)] = 3321,
  [SMALL_STATE(173)] = 3334,
  [SMALL_STATE(174)] = 3347,
  [SMALL_STATE(175)] = 3360,
  [SMALL_STATE(176)] = 3370,
  [SMALL_STATE(177)] = 3380,
  [SMALL_STATE(178)] = 3390,
  [SMALL_STATE(179)] = 3400,
  [SMALL_STATE(180)] = 3410,
  [SMALL_STATE(181)] = 3420,
  [SMALL_STATE(182)] = 3430,
  [SMALL_STATE(183)] = 3440,
  [SMALL_STATE(184)] = 3450,
  [SMALL_STATE(185)] = 3460,
  [SMALL_STATE(186)] = 3470,
  [SMALL_STATE(187)] = 3480,
  [SMALL_STATE(188)] = 3490,
  [SMALL_STATE(189)] = 3500,
  [SMALL_STATE(190)] = 3510,
  [SMALL_STATE(191)] = 3520,
  [SMALL_STATE(192)] = 3530,
  [SMALL_STATE(193)] = 3540,
  [SMALL_STATE(194)] = 3550,
  [SMALL_STATE(195)] = 3560,
  [SMALL_STATE(196)] = 3570,
  [SMALL_STATE(197)] = 3580,
  [SMALL_STATE(198)] = 3590,
  [SMALL_STATE(199)] = 3600,
  [SMALL_STATE(200)] = 3610,
  [SMALL_STATE(201)] = 3620,
  [SMALL_STATE(202)] = 3630,
  [SMALL_STATE(203)] = 3640,
  [SMALL_STATE(204)] = 3650,
  [SMALL_STATE(205)] = 3660,
  [SMALL_STATE(206)] = 3670,
  [SMALL_STATE(207)] = 3680,
  [SMALL_STATE(208)] = 3690,
  [SMALL_STATE(209)] = 3700,
  [SMALL_STATE(210)] = 3710,
  [SMALL_STATE(211)] = 3720,
  [SMALL_STATE(212)] = 3730,
  [SMALL_STATE(213)] = 3740,
  [SMALL_STATE(214)] = 3750,
  [SMALL_STATE(215)] = 3760,
  [SMALL_STATE(216)] = 3770,
  [SMALL_STATE(217)] = 3780,
  [SMALL_STATE(218)] = 3790,
  [SMALL_STATE(219)] = 3800,
  [SMALL_STATE(220)] = 3810,
  [SMALL_STATE(221)] = 3820,
  [SMALL_STATE(222)] = 3830,
  [SMALL_STATE(223)] = 3840,
  [SMALL_STATE(224)] = 3850,
  [SMALL_STATE(225)] = 3860,
  [SMALL_STATE(226)] = 3870,
  [SMALL_STATE(227)] = 3880,
  [SMALL_STATE(228)] = 3890,
  [SMALL_STATE(229)] = 3900,
  [SMALL_STATE(230)] = 3910,
  [SMALL_STATE(231)] = 3920,
  [SMALL_STATE(232)] = 3930,
  [SMALL_STATE(233)] = 3940,
  [SMALL_STATE(234)] = 3950,
  [SMALL_STATE(235)] = 3960,
  [SMALL_STATE(236)] = 3970,
  [SMALL_STATE(237)] = 3980,
  [SMALL_STATE(238)] = 3990,
  [SMALL_STATE(239)] = 4000,
  [SMALL_STATE(240)] = 4010,
  [SMALL_STATE(241)] = 4020,
  [SMALL_STATE(242)] = 4030,
  [SMALL_STATE(243)] = 4040,
  [SMALL_STATE(244)] = 4050,
  [SMALL_STATE(245)] = 4060,
  [SMALL_STATE(246)] = 4070,
  [SMALL_STATE(247)] = 4080,
  [SMALL_STATE(248)] = 4090,
  [SMALL_STATE(249)] = 4100,
  [SMALL_STATE(250)] = 4110,
  [SMALL_STATE(251)] = 4120,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(149),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(49),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(172),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(80),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(69),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(154),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(63),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(139),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(105),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(148),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(86),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(159),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(223),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(150),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(56),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(142),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(92),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(168),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(136),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(151),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(112),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(139),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(126),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(152),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(113),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(184),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(91),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(183),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(235),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(96),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(79),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(127),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [705] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
