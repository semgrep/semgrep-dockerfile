#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 356
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 52
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 60

enum {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  anon_sym_COLON = 14,
  aux_sym_user_name_or_group_token1 = 15,
  aux_sym_immediate_user_name_or_group_fragment_token1 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym_stopsignal_value_token1 = 23,
  aux_sym_stopsignal_value_token2 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  anon_sym_NONE = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_maintainer_instruction_token2 = 29,
  aux_sym_cross_build_instruction_token1 = 30,
  aux_sym_path_token1 = 31,
  aux_sym_path_token2 = 32,
  anon_sym_DOLLAR = 33,
  anon_sym_DOLLAR2 = 34,
  anon_sym_LBRACE = 35,
  aux_sym_expansion_body_token1 = 36,
  anon_sym_RBRACE = 37,
  sym_variable = 38,
  aux_sym_spaced_env_pair_token1 = 39,
  aux_sym_env_key_token1 = 40,
  aux_sym_expose_port_token1 = 41,
  anon_sym_SLASHtcp = 42,
  anon_sym_SLASHudp = 43,
  aux_sym_label_pair_token1 = 44,
  aux_sym_image_name_token1 = 45,
  aux_sym_image_name_token2 = 46,
  aux_sym_image_tag_token1 = 47,
  anon_sym_AT = 48,
  aux_sym_image_digest_token1 = 49,
  anon_sym_DASH_DASH = 50,
  aux_sym_param_token1 = 51,
  aux_sym_param_token2 = 52,
  aux_sym_image_alias_token1 = 53,
  aux_sym_image_alias_token2 = 54,
  anon_sym_LBRACK = 55,
  anon_sym_COMMA = 56,
  anon_sym_RBRACK = 57,
  aux_sym_shell_fragment_token1 = 58,
  aux_sym_shell_fragment_token2 = 59,
  anon_sym_BSLASH_LF = 60,
  anon_sym_POUND = 61,
  anon_sym_DQUOTE = 62,
  aux_sym_double_quoted_string_token1 = 63,
  aux_sym_unquoted_string_token1 = 64,
  anon_sym_BSLASH = 65,
  sym_escape_sequence = 66,
  sym_non_newline_whitespace = 67,
  sym_comment = 68,
  sym_semgrep_metavariable = 69,
  sym_semgrep_ellipsis = 70,
  sym_source_file = 71,
  sym_instruction = 72,
  sym_from_instruction = 73,
  sym_run_instruction = 74,
  sym_cmd_instruction = 75,
  sym_label_instruction = 76,
  sym_expose_instruction = 77,
  sym_env_instruction = 78,
  sym_add_instruction = 79,
  sym_copy_instruction = 80,
  sym_entrypoint_instruction = 81,
  sym_volume_instruction = 82,
  sym_user_instruction = 83,
  sym_user_name_or_group = 84,
  sym_immediate_user_name_or_group = 85,
  sym_immediate_user_name_or_group_fragment = 86,
  sym_workdir_instruction = 87,
  sym_arg_instruction = 88,
  sym_onbuild_instruction = 89,
  sym_stopsignal_instruction = 90,
  sym_stopsignal_value = 91,
  sym_healthcheck_instruction = 92,
  sym_shell_instruction = 93,
  sym_maintainer_instruction = 94,
  sym_cross_build_instruction = 95,
  sym_path = 96,
  sym_expansion = 97,
  sym_immediate_expansion = 98,
  sym_imm_expansion = 99,
  sym_expansion_body = 100,
  sym_env_pair = 101,
  sym_spaced_env_pair = 102,
  sym_env_key = 103,
  sym_expose_port = 104,
  sym_label_pair = 105,
  sym_image_spec = 106,
  sym_image_name = 107,
  sym_image_tag = 108,
  sym_image_digest = 109,
  sym_param = 110,
  sym_image_alias = 111,
  sym_string_array = 112,
  sym_shell_command = 113,
  sym_shell_fragment = 114,
  sym_line_continuation = 115,
  sym_required_line_continuation = 116,
  sym_comment_line = 117,
  sym_anon_comment = 118,
  sym_double_quoted_string = 119,
  sym_unquoted_string = 120,
  sym_array_element = 121,
  aux_sym_source_file_repeat1 = 122,
  aux_sym_label_instruction_repeat1 = 123,
  aux_sym_expose_instruction_repeat1 = 124,
  aux_sym_env_instruction_repeat1 = 125,
  aux_sym_add_instruction_repeat1 = 126,
  aux_sym_volume_instruction_repeat1 = 127,
  aux_sym_user_name_or_group_repeat1 = 128,
  aux_sym_stopsignal_value_repeat1 = 129,
  aux_sym_healthcheck_instruction_repeat1 = 130,
  aux_sym_path_repeat1 = 131,
  aux_sym_image_name_repeat1 = 132,
  aux_sym_image_tag_repeat1 = 133,
  aux_sym_image_digest_repeat1 = 134,
  aux_sym_image_alias_repeat1 = 135,
  aux_sym_string_array_repeat1 = 136,
  aux_sym_shell_command_repeat1 = 137,
  aux_sym_shell_command_repeat2 = 138,
  aux_sym_shell_fragment_repeat1 = 139,
  aux_sym_double_quoted_string_repeat1 = 140,
  aux_sym_unquoted_string_repeat1 = 141,
  alias_sym_imm_tok_at = 142,
  alias_sym_imm_tok_bslashspace = 143,
  alias_sym_imm_tok_colon = 144,
  alias_sym_imm_tok_dollar = 145,
  alias_sym_imm_tok_eq = 146,
  alias_sym_imm_tok_lcurl = 147,
  alias_sym_imm_tok_pat_0c7fc22 = 148,
  alias_sym_imm_tok_pat_24a1611 = 149,
  alias_sym_imm_tok_pat_2b37705 = 150,
  alias_sym_imm_tok_pat_3d340f6 = 151,
  alias_sym_imm_tok_pat_441cd81 = 152,
  alias_sym_imm_tok_pat_589b0f8 = 153,
  alias_sym_imm_tok_pat_8713919 = 154,
  alias_sym_imm_tok_pat_9a14b5c = 155,
  alias_sym_imm_tok_pat_b295287 = 156,
  alias_sym_imm_tok_pat_bcfc287 = 157,
  alias_sym_imm_tok_pat_d2727a0 = 158,
  alias_sym_imm_tok_pat_f43f746 = 159,
  alias_sym_imm_tok_pat_f6e1de8 = 160,
  alias_sym_imm_tok_rcurl = 161,
  alias_sym_pat_1167a92 = 162,
  alias_sym_pat_18946a5 = 163,
  alias_sym_pat_217c202 = 164,
  alias_sym_pat_4128122 = 165,
  alias_sym_pat_441cd81 = 166,
  alias_sym_pat_4a2f38a = 167,
  alias_sym_pat_4b81dfc = 168,
  alias_sym_pat_4de4cb9 = 169,
  alias_sym_pat_4fd4a56 = 170,
  alias_sym_pat_8165e5f = 171,
  alias_sym_pat_9a14b5c = 172,
  alias_sym_pat_add = 173,
  alias_sym_pat_arg = 174,
  alias_sym_pat_as = 175,
  alias_sym_pat_b295287 = 176,
  alias_sym_pat_cmd = 177,
  alias_sym_pat_copy = 178,
  alias_sym_pat_entr = 179,
  alias_sym_pat_env = 180,
  alias_sym_pat_expose = 181,
  alias_sym_pat_f05eb95 = 182,
  alias_sym_pat_from = 183,
  alias_sym_pat_heal = 184,
  alias_sym_pat_label = 185,
  alias_sym_pat_main = 186,
  alias_sym_pat_onbu = 187,
  alias_sym_pat_run = 188,
  alias_sym_pat_shell = 189,
  alias_sym_pat_stop = 190,
  alias_sym_pat_user = 191,
  alias_sym_pat_volume = 192,
  alias_sym_pat_work = 193,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "from_instruction_token1",
  [aux_sym_from_instruction_token2] = "from_instruction_token2",
  [aux_sym_run_instruction_token1] = "run_instruction_token1",
  [aux_sym_cmd_instruction_token1] = "cmd_instruction_token1",
  [aux_sym_label_instruction_token1] = "label_instruction_token1",
  [aux_sym_expose_instruction_token1] = "expose_instruction_token1",
  [aux_sym_env_instruction_token1] = "env_instruction_token1",
  [aux_sym_add_instruction_token1] = "add_instruction_token1",
  [aux_sym_copy_instruction_token1] = "copy_instruction_token1",
  [aux_sym_entrypoint_instruction_token1] = "entrypoint_instruction_token1",
  [aux_sym_volume_instruction_token1] = "volume_instruction_token1",
  [aux_sym_user_instruction_token1] = "user_instruction_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_user_name_or_group_token1] = "user_name_or_group_token1",
  [aux_sym_immediate_user_name_or_group_fragment_token1] = "immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "workdir_instruction_token1",
  [aux_sym_arg_instruction_token1] = "arg_instruction_token1",
  [aux_sym_arg_instruction_token2] = "arg_instruction_token2",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "onbuild_instruction_token1",
  [aux_sym_stopsignal_instruction_token1] = "stopsignal_instruction_token1",
  [aux_sym_stopsignal_value_token1] = "stopsignal_value_token1",
  [aux_sym_stopsignal_value_token2] = "stopsignal_value_token2",
  [aux_sym_healthcheck_instruction_token1] = "healthcheck_instruction_token1",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "shell_instruction_token1",
  [aux_sym_maintainer_instruction_token1] = "maintainer_instruction_token1",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "cross_build_instruction_token1",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_body_token1] = "expansion_body_token1",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym_spaced_env_pair_token1] = "spaced_env_pair_token1",
  [aux_sym_env_key_token1] = "env_key_token1",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "label_pair_token1",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
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
  [sym_immediate_user_name_or_group] = "immediate_user_name_or_group",
  [sym_immediate_user_name_or_group_fragment] = "immediate_user_name_or_group_fragment",
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
  [sym_immediate_expansion] = "immediate_expansion",
  [sym_imm_expansion] = "imm_expansion",
  [sym_expansion_body] = "expansion_body",
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
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
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
  [alias_sym_imm_tok_at] = "imm_tok_at",
  [alias_sym_imm_tok_bslashspace] = "imm_tok_bslashspace",
  [alias_sym_imm_tok_colon] = "imm_tok_colon",
  [alias_sym_imm_tok_dollar] = "imm_tok_dollar",
  [alias_sym_imm_tok_eq] = "imm_tok_eq",
  [alias_sym_imm_tok_lcurl] = "imm_tok_lcurl",
  [alias_sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [alias_sym_imm_tok_pat_24a1611] = "imm_tok_pat_24a1611",
  [alias_sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [alias_sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [alias_sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [alias_sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [alias_sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [alias_sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [alias_sym_imm_tok_pat_b295287] = "imm_tok_pat_b295287",
  [alias_sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [alias_sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [alias_sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [alias_sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [alias_sym_imm_tok_rcurl] = "imm_tok_rcurl",
  [alias_sym_pat_1167a92] = "pat_1167a92",
  [alias_sym_pat_18946a5] = "pat_18946a5",
  [alias_sym_pat_217c202] = "pat_217c202",
  [alias_sym_pat_4128122] = "pat_4128122",
  [alias_sym_pat_441cd81] = "pat_441cd81",
  [alias_sym_pat_4a2f38a] = "pat_4a2f38a",
  [alias_sym_pat_4b81dfc] = "pat_4b81dfc",
  [alias_sym_pat_4de4cb9] = "pat_4de4cb9",
  [alias_sym_pat_4fd4a56] = "pat_4fd4a56",
  [alias_sym_pat_8165e5f] = "pat_8165e5f",
  [alias_sym_pat_9a14b5c] = "pat_9a14b5c",
  [alias_sym_pat_add] = "pat_add",
  [alias_sym_pat_arg] = "pat_arg",
  [alias_sym_pat_as] = "pat_as",
  [alias_sym_pat_b295287] = "pat_b295287",
  [alias_sym_pat_cmd] = "pat_cmd",
  [alias_sym_pat_copy] = "pat_copy",
  [alias_sym_pat_entr] = "pat_entr",
  [alias_sym_pat_env] = "pat_env",
  [alias_sym_pat_expose] = "pat_expose",
  [alias_sym_pat_f05eb95] = "pat_f05eb95",
  [alias_sym_pat_from] = "pat_from",
  [alias_sym_pat_heal] = "pat_heal",
  [alias_sym_pat_label] = "pat_label",
  [alias_sym_pat_main] = "pat_main",
  [alias_sym_pat_onbu] = "pat_onbu",
  [alias_sym_pat_run] = "pat_run",
  [alias_sym_pat_shell] = "pat_shell",
  [alias_sym_pat_stop] = "pat_stop",
  [alias_sym_pat_user] = "pat_user",
  [alias_sym_pat_volume] = "pat_volume",
  [alias_sym_pat_work] = "pat_work",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_user_name_or_group_token1] = aux_sym_user_name_or_group_token1,
  [aux_sym_immediate_user_name_or_group_fragment_token1] = aux_sym_immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = aux_sym_arg_instruction_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym_stopsignal_value_token1] = aux_sym_stopsignal_value_token1,
  [aux_sym_stopsignal_value_token2] = aux_sym_stopsignal_value_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_body_token1] = aux_sym_expansion_body_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym_spaced_env_pair_token1] = aux_sym_spaced_env_pair_token1,
  [aux_sym_env_key_token1] = aux_sym_env_key_token1,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = aux_sym_label_pair_token1,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
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
  [sym_immediate_user_name_or_group] = sym_immediate_user_name_or_group,
  [sym_immediate_user_name_or_group_fragment] = sym_immediate_user_name_or_group_fragment,
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
  [sym_immediate_expansion] = sym_immediate_expansion,
  [sym_imm_expansion] = sym_imm_expansion,
  [sym_expansion_body] = sym_expansion_body,
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
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
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
  [alias_sym_imm_tok_at] = alias_sym_imm_tok_at,
  [alias_sym_imm_tok_bslashspace] = alias_sym_imm_tok_bslashspace,
  [alias_sym_imm_tok_colon] = alias_sym_imm_tok_colon,
  [alias_sym_imm_tok_dollar] = alias_sym_imm_tok_dollar,
  [alias_sym_imm_tok_eq] = alias_sym_imm_tok_eq,
  [alias_sym_imm_tok_lcurl] = alias_sym_imm_tok_lcurl,
  [alias_sym_imm_tok_pat_0c7fc22] = alias_sym_imm_tok_pat_0c7fc22,
  [alias_sym_imm_tok_pat_24a1611] = alias_sym_imm_tok_pat_24a1611,
  [alias_sym_imm_tok_pat_2b37705] = alias_sym_imm_tok_pat_2b37705,
  [alias_sym_imm_tok_pat_3d340f6] = alias_sym_imm_tok_pat_3d340f6,
  [alias_sym_imm_tok_pat_441cd81] = alias_sym_imm_tok_pat_441cd81,
  [alias_sym_imm_tok_pat_589b0f8] = alias_sym_imm_tok_pat_589b0f8,
  [alias_sym_imm_tok_pat_8713919] = alias_sym_imm_tok_pat_8713919,
  [alias_sym_imm_tok_pat_9a14b5c] = alias_sym_imm_tok_pat_9a14b5c,
  [alias_sym_imm_tok_pat_b295287] = alias_sym_imm_tok_pat_b295287,
  [alias_sym_imm_tok_pat_bcfc287] = alias_sym_imm_tok_pat_bcfc287,
  [alias_sym_imm_tok_pat_d2727a0] = alias_sym_imm_tok_pat_d2727a0,
  [alias_sym_imm_tok_pat_f43f746] = alias_sym_imm_tok_pat_f43f746,
  [alias_sym_imm_tok_pat_f6e1de8] = alias_sym_imm_tok_pat_f6e1de8,
  [alias_sym_imm_tok_rcurl] = alias_sym_imm_tok_rcurl,
  [alias_sym_pat_1167a92] = alias_sym_pat_1167a92,
  [alias_sym_pat_18946a5] = alias_sym_pat_18946a5,
  [alias_sym_pat_217c202] = alias_sym_pat_217c202,
  [alias_sym_pat_4128122] = alias_sym_pat_4128122,
  [alias_sym_pat_441cd81] = alias_sym_pat_441cd81,
  [alias_sym_pat_4a2f38a] = alias_sym_pat_4a2f38a,
  [alias_sym_pat_4b81dfc] = alias_sym_pat_4b81dfc,
  [alias_sym_pat_4de4cb9] = alias_sym_pat_4de4cb9,
  [alias_sym_pat_4fd4a56] = alias_sym_pat_4fd4a56,
  [alias_sym_pat_8165e5f] = alias_sym_pat_8165e5f,
  [alias_sym_pat_9a14b5c] = alias_sym_pat_9a14b5c,
  [alias_sym_pat_add] = alias_sym_pat_add,
  [alias_sym_pat_arg] = alias_sym_pat_arg,
  [alias_sym_pat_as] = alias_sym_pat_as,
  [alias_sym_pat_b295287] = alias_sym_pat_b295287,
  [alias_sym_pat_cmd] = alias_sym_pat_cmd,
  [alias_sym_pat_copy] = alias_sym_pat_copy,
  [alias_sym_pat_entr] = alias_sym_pat_entr,
  [alias_sym_pat_env] = alias_sym_pat_env,
  [alias_sym_pat_expose] = alias_sym_pat_expose,
  [alias_sym_pat_f05eb95] = alias_sym_pat_f05eb95,
  [alias_sym_pat_from] = alias_sym_pat_from,
  [alias_sym_pat_heal] = alias_sym_pat_heal,
  [alias_sym_pat_label] = alias_sym_pat_label,
  [alias_sym_pat_main] = alias_sym_pat_main,
  [alias_sym_pat_onbu] = alias_sym_pat_onbu,
  [alias_sym_pat_run] = alias_sym_pat_run,
  [alias_sym_pat_shell] = alias_sym_pat_shell,
  [alias_sym_pat_stop] = alias_sym_pat_stop,
  [alias_sym_pat_user] = alias_sym_pat_user,
  [alias_sym_pat_volume] = alias_sym_pat_volume,
  [alias_sym_pat_work] = alias_sym_pat_work,
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
  [aux_sym_from_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_user_name_or_group_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_body_token1] = {
    .visible = false,
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
  [aux_sym_spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token2] = {
    .visible = false,
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
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
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
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
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
  [sym_immediate_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_user_name_or_group_fragment] = {
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
  [sym_immediate_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion_body] = {
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
  [aux_sym_add_instruction_repeat1] = {
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
  [alias_sym_imm_tok_at] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_bslashspace] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_colon] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_dollar] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_eq] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_lcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_24a1611] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_b295287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_rcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_18946a5] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_217c202] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4b81dfc] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_8165e5f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_add] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_arg] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_as] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_b295287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_cmd] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_copy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_entr] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_env] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_expose] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_f05eb95] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_from] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_heal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_label] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_main] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_onbu] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_run] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_shell] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_stop] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_user] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_volume] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_work] = {
    .visible = true,
    .named = true,
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
  [3] = {.index = 0, .length = 1},
  [17] = {.index = 1, .length = 1},
  [19] = {.index = 2, .length = 1},
  [20] = {.index = 2, .length = 1},
  [29] = {.index = 3, .length = 2},
  [30] = {.index = 5, .length = 2},
  [32] = {.index = 0, .length = 1},
  [40] = {.index = 7, .length = 1},
  [45] = {.index = 8, .length = 3},
  [49] = {.index = 11, .length = 2},
  [50] = {.index = 11, .length = 2},
  [51] = {.index = 13, .length = 2},
  [52] = {.index = 13, .length = 2},
  [53] = {.index = 15, .length = 2},
  [54] = {.index = 17, .length = 2},
  [55] = {.index = 17, .length = 2},
  [57] = {.index = 19, .length = 2},
  [59] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_user, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_as, 3},
  [8] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [11] =
    {field_key, 0},
    {field_value, 2},
  [13] =
    {field_name, 0},
    {field_value, 2},
  [15] =
    {field_group, 3},
    {field_user, 1},
  [17] =
    {field_default, 3},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_pat_8165e5f,
  },
  [2] = {
    [0] = alias_sym_pat_from,
  },
  [4] = {
    [0] = alias_sym_pat_4b81dfc,
  },
  [5] = {
    [0] = alias_sym_pat_f05eb95,
  },
  [6] = {
    [0] = alias_sym_pat_run,
  },
  [7] = {
    [0] = alias_sym_pat_cmd,
  },
  [8] = {
    [0] = alias_sym_pat_label,
  },
  [9] = {
    [0] = alias_sym_pat_217c202,
  },
  [10] = {
    [0] = alias_sym_pat_expose,
  },
  [11] = {
    [0] = alias_sym_pat_18946a5,
  },
  [12] = {
    [0] = alias_sym_pat_env,
  },
  [13] = {
    [0] = alias_sym_pat_1167a92,
  },
  [14] = {
    [0] = alias_sym_pat_entr,
  },
  [15] = {
    [0] = alias_sym_pat_volume,
  },
  [16] = {
    [0] = alias_sym_pat_b295287,
  },
  [17] = {
    [0] = alias_sym_pat_user,
  },
  [18] = {
    [0] = alias_sym_pat_work,
  },
  [19] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
  },
  [20] = {
    [0] = alias_sym_pat_arg,
  },
  [21] = {
    [0] = alias_sym_pat_onbu,
  },
  [22] = {
    [0] = alias_sym_pat_441cd81,
  },
  [23] = {
    [0] = alias_sym_pat_stop,
  },
  [24] = {
    [0] = alias_sym_pat_heal,
  },
  [25] = {
    [0] = alias_sym_pat_shell,
  },
  [26] = {
    [0] = alias_sym_pat_main,
    [1] = alias_sym_pat_4fd4a56,
  },
  [27] = {
    [0] = alias_sym_pat_4a2f38a,
    [1] = alias_sym_pat_4fd4a56,
  },
  [28] = {
    [0] = alias_sym_imm_tok_pat_2b37705,
  },
  [31] = {
    [1] = alias_sym_pat_4fd4a56,
  },
  [32] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [33] = {
    [0] = alias_sym_imm_tok_pat_0c7fc22,
  },
  [34] = {
    [0] = alias_sym_pat_add,
  },
  [35] = {
    [0] = alias_sym_pat_copy,
  },
  [36] = {
    [0] = alias_sym_imm_tok_pat_b295287,
  },
  [37] = {
    [0] = alias_sym_imm_tok_pat_441cd81,
  },
  [38] = {
    [0] = alias_sym_imm_tok_dollar,
  },
  [39] = {
    [0] = alias_sym_pat_9a14b5c,
  },
  [40] = {
    [0] = alias_sym_pat_from,
    [2] = alias_sym_pat_as,
  },
  [41] = {
    [0] = alias_sym_imm_tok_pat_bcfc287,
  },
  [42] = {
    [0] = alias_sym_imm_tok_colon,
  },
  [43] = {
    [0] = alias_sym_imm_tok_pat_d2727a0,
  },
  [44] = {
    [0] = alias_sym_imm_tok_at,
  },
  [46] = {
    [0] = alias_sym_imm_tok_pat_589b0f8,
  },
  [47] = {
    [0] = alias_sym_imm_tok_pat_24a1611,
  },
  [48] = {
    [0] = alias_sym_imm_tok_bslashspace,
  },
  [49] = {
    [0] = alias_sym_pat_4128122,
    [1] = alias_sym_imm_tok_eq,
  },
  [50] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [51] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [52] = {
    [1] = alias_sym_imm_tok_pat_3d340f6,
  },
  [53] = {
    [0] = alias_sym_pat_user,
    [2] = alias_sym_imm_tok_colon,
  },
  [54] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
    [2] = alias_sym_imm_tok_eq,
  },
  [55] = {
    [0] = alias_sym_pat_arg,
    [2] = alias_sym_imm_tok_eq,
  },
  [56] = {
    [0] = alias_sym_imm_tok_lcurl,
    [1] = alias_sym_imm_tok_pat_8713919,
    [2] = alias_sym_imm_tok_rcurl,
  },
  [57] = {
    [1] = alias_sym_imm_tok_pat_f43f746,
    [2] = alias_sym_imm_tok_eq,
    [3] = alias_sym_imm_tok_pat_f6e1de8,
  },
  [58] = {
    [0] = alias_sym_imm_tok_pat_9a14b5c,
  },
  [59] = {
    [0] = alias_sym_pat_from,
    [3] = alias_sym_pat_as,
  },
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
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(247);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(259);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(259);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(245);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(245);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(268);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
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
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(219);
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
          lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
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
          lookahead == 'g') ADVANCE(186);
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
          lookahead == 'k') ADVANCE(194);
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
          lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
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
          lookahead == 'm') ADVANCE(166);
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
          lookahead == 'n') ADVANCE(168);
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
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
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
          lookahead == 's') ADVANCE(167);
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
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(172);
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
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
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
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '}') ADVANCE(213);
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
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(242);
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
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(247);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(245);
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
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 161},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 35},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 32},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 161},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 161},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 161},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 33},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 21},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 33},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 16},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 161},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 22},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 37},
  [168] = {.lex_state = 38},
  [169] = {.lex_state = 22},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 18},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 33},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 40},
  [185] = {.lex_state = 50},
  [186] = {.lex_state = 50},
  [187] = {.lex_state = 50},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 23},
  [192] = {.lex_state = 21},
  [193] = {.lex_state = 50},
  [194] = {.lex_state = 28},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 23},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 50},
  [202] = {.lex_state = 21},
  [203] = {.lex_state = 161},
  [204] = {.lex_state = 50},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 50},
  [207] = {.lex_state = 50},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 161},
  [210] = {.lex_state = 50},
  [211] = {.lex_state = 50},
  [212] = {.lex_state = 50},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 50},
  [217] = {.lex_state = 50},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 32},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 50},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 32},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 14},
  [231] = {.lex_state = 50},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 32},
  [235] = {.lex_state = 32},
  [236] = {.lex_state = 50},
  [237] = {.lex_state = 14},
  [238] = {.lex_state = 14},
  [239] = {.lex_state = 50},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 50},
  [242] = {.lex_state = 32},
  [243] = {.lex_state = 32},
  [244] = {.lex_state = 32},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 50},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 28},
  [251] = {.lex_state = 50},
  [252] = {.lex_state = 161},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 33},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 23},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 18},
  [261] = {.lex_state = 161},
  [262] = {.lex_state = 161},
  [263] = {.lex_state = 161},
  [264] = {.lex_state = 161},
  [265] = {.lex_state = 161},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 46},
  [268] = {.lex_state = 23},
  [269] = {.lex_state = 46},
  [270] = {.lex_state = 23},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 34},
  [274] = {.lex_state = 18},
  [275] = {.lex_state = 42},
  [276] = {.lex_state = 18},
  [277] = {.lex_state = 161},
  [278] = {.lex_state = 161},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 53},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 161},
  [285] = {.lex_state = 161},
  [286] = {.lex_state = 38},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 32},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 161},
  [304] = {.lex_state = 54},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 161},
  [310] = {.lex_state = 54},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 199},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 161},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 161},
  [317] = {.lex_state = 161},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 54},
  [320] = {.lex_state = 161},
  [321] = {.lex_state = 161},
  [322] = {.lex_state = 161},
  [323] = {.lex_state = 161},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 199},
  [326] = {.lex_state = 161},
  [327] = {.lex_state = 199},
  [328] = {.lex_state = 161},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 161},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 161},
  [333] = {.lex_state = 161},
  [334] = {.lex_state = 161},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 161},
  [337] = {.lex_state = 161},
  [338] = {.lex_state = 53},
  [339] = {.lex_state = 161},
  [340] = {.lex_state = 53},
  [341] = {.lex_state = 161},
  [342] = {.lex_state = 53},
  [343] = {.lex_state = 53},
  [344] = {.lex_state = 53},
  [345] = {.lex_state = 53},
  [346] = {.lex_state = 53},
  [347] = {.lex_state = 53},
  [348] = {.lex_state = 53},
  [349] = {.lex_state = 53},
  [350] = {.lex_state = 53},
  [351] = {.lex_state = 53},
  [352] = {.lex_state = 53},
  [353] = {.lex_state = 38},
  [354] = {.lex_state = 38},
  [355] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_stopsignal_value_token2] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(288),
    [sym_instruction] = STATE(311),
    [sym_from_instruction] = STATE(299),
    [sym_run_instruction] = STATE(299),
    [sym_cmd_instruction] = STATE(299),
    [sym_label_instruction] = STATE(299),
    [sym_expose_instruction] = STATE(299),
    [sym_env_instruction] = STATE(299),
    [sym_add_instruction] = STATE(299),
    [sym_copy_instruction] = STATE(299),
    [sym_entrypoint_instruction] = STATE(299),
    [sym_volume_instruction] = STATE(299),
    [sym_user_instruction] = STATE(299),
    [sym_workdir_instruction] = STATE(299),
    [sym_arg_instruction] = STATE(299),
    [sym_onbuild_instruction] = STATE(299),
    [sym_stopsignal_instruction] = STATE(299),
    [sym_healthcheck_instruction] = STATE(299),
    [sym_shell_instruction] = STATE(299),
    [sym_maintainer_instruction] = STATE(299),
    [sym_cross_build_instruction] = STATE(299),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_from_instruction_token1] = ACTIONS(7),
    [aux_sym_run_instruction_token1] = ACTIONS(9),
    [aux_sym_cmd_instruction_token1] = ACTIONS(11),
    [aux_sym_label_instruction_token1] = ACTIONS(13),
    [aux_sym_expose_instruction_token1] = ACTIONS(15),
    [aux_sym_env_instruction_token1] = ACTIONS(17),
    [aux_sym_add_instruction_token1] = ACTIONS(19),
    [aux_sym_copy_instruction_token1] = ACTIONS(21),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(23),
    [aux_sym_volume_instruction_token1] = ACTIONS(25),
    [aux_sym_user_instruction_token1] = ACTIONS(27),
    [aux_sym_workdir_instruction_token1] = ACTIONS(29),
    [aux_sym_arg_instruction_token1] = ACTIONS(31),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(33),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(35),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(37),
    [aux_sym_shell_instruction_token1] = ACTIONS(39),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(41),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(43),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
    [sym_semgrep_metavariable] = ACTIONS(47),
    [sym_semgrep_ellipsis] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(54), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(57), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(84), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(96), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(99), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(102), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(105), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(108), 1,
      sym_comment,
    STATE(311), 1,
      sym_instruction,
    ACTIONS(111), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(299), 19,
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
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(311), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(299), 19,
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
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(4), 1,
      sym_line_continuation,
    STATE(329), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(299), 19,
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
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_comment,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [324] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      sym_semgrep_ellipsis,
    STATE(6), 1,
      sym_line_continuation,
    STATE(28), 1,
      aux_sym_shell_command_repeat1,
    STATE(171), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(194), 1,
      sym_comment_line,
    STATE(220), 1,
      sym_shell_fragment,
    STATE(306), 1,
      sym_anon_comment,
    STATE(305), 2,
      sym_string_array,
      sym_shell_command,
  [365] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      sym_semgrep_ellipsis,
    STATE(7), 1,
      sym_line_continuation,
    STATE(28), 1,
      aux_sym_shell_command_repeat1,
    STATE(171), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(194), 1,
      sym_comment_line,
    STATE(220), 1,
      sym_shell_fragment,
    STATE(306), 1,
      sym_anon_comment,
    STATE(315), 2,
      sym_string_array,
      sym_shell_command,
  [406] = 12,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(81), 1,
      sym_imm_expansion,
    STATE(93), 1,
      sym_immediate_expansion,
    ACTIONS(130), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(188), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [445] = 13,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      sym_semgrep_ellipsis,
    STATE(9), 1,
      sym_line_continuation,
    STATE(28), 1,
      aux_sym_shell_command_repeat1,
    STATE(171), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(194), 1,
      sym_comment_line,
    STATE(220), 1,
      sym_shell_fragment,
    STATE(306), 1,
      sym_anon_comment,
    STATE(290), 2,
      sym_string_array,
      sym_shell_command,
  [486] = 10,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_DOLLAR2,
    ACTIONS(146), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_line_continuation,
    STATE(11), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(34), 1,
      sym_imm_expansion,
    STATE(37), 1,
      sym_immediate_expansion,
    ACTIONS(144), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [519] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      anon_sym_DOLLAR2,
    ACTIONS(157), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      sym_imm_expansion,
    STATE(37), 1,
      sym_immediate_expansion,
    STATE(11), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(155), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [550] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(167), 1,
      anon_sym_DOLLAR2,
    ACTIONS(169), 1,
      aux_sym_image_name_token2,
    STATE(12), 1,
      sym_line_continuation,
    STATE(13), 1,
      aux_sym_image_name_repeat1,
    STATE(101), 1,
      sym_immediate_expansion,
    STATE(102), 1,
      sym_imm_expansion,
    ACTIONS(163), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [580] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(173), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR2,
    ACTIONS(178), 1,
      aux_sym_image_name_token2,
    STATE(101), 1,
      sym_immediate_expansion,
    STATE(102), 1,
      sym_imm_expansion,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(171), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [608] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_DOLLAR2,
    ACTIONS(169), 1,
      aux_sym_image_name_token2,
    ACTIONS(183), 1,
      aux_sym_from_instruction_token2,
    STATE(12), 1,
      aux_sym_image_name_repeat1,
    STATE(14), 1,
      sym_line_continuation,
    STATE(101), 1,
      sym_immediate_expansion,
    STATE(102), 1,
      sym_imm_expansion,
    ACTIONS(181), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [638] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_DOLLAR2,
    ACTIONS(169), 1,
      aux_sym_image_name_token2,
    ACTIONS(187), 1,
      aux_sym_from_instruction_token2,
    STATE(13), 1,
      aux_sym_image_name_repeat1,
    STATE(15), 1,
      sym_line_continuation,
    STATE(101), 1,
      sym_immediate_expansion,
    STATE(102), 1,
      sym_imm_expansion,
    ACTIONS(185), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [668] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_DOLLAR2,
    ACTIONS(169), 1,
      aux_sym_image_name_token2,
    ACTIONS(191), 1,
      aux_sym_from_instruction_token2,
    STATE(15), 1,
      aux_sym_image_name_repeat1,
    STATE(16), 1,
      sym_line_continuation,
    STATE(101), 1,
      sym_immediate_expansion,
    STATE(102), 1,
      sym_imm_expansion,
    ACTIONS(189), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [698] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(193), 1,
      anon_sym_DOLLAR2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      sym_line_continuation,
    STATE(50), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(140), 1,
      sym_immediate_expansion,
    STATE(179), 1,
      sym_imm_expansion,
    STATE(300), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [730] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DOLLAR2,
    ACTIONS(203), 1,
      aux_sym_unquoted_string_token1,
    STATE(10), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(18), 1,
      sym_line_continuation,
    STATE(34), 1,
      sym_imm_expansion,
    STATE(37), 1,
      sym_immediate_expansion,
    STATE(181), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [762] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DOLLAR2,
    ACTIONS(203), 1,
      aux_sym_unquoted_string_token1,
    STATE(10), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(19), 1,
      sym_line_continuation,
    STATE(34), 1,
      sym_imm_expansion,
    STATE(37), 1,
      sym_immediate_expansion,
    STATE(183), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [794] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(205), 1,
      anon_sym_DOLLAR2,
    ACTIONS(208), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    STATE(81), 1,
      sym_imm_expansion,
    STATE(93), 1,
      sym_immediate_expansion,
    ACTIONS(155), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [824] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(193), 1,
      anon_sym_DOLLAR2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(21), 1,
      sym_line_continuation,
    STATE(50), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(140), 1,
      sym_immediate_expansion,
    STATE(179), 1,
      sym_imm_expansion,
    STATE(293), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [856] = 10,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(136), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    ACTIONS(140), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(81), 1,
      sym_imm_expansion,
    STATE(93), 1,
      sym_immediate_expansion,
    ACTIONS(144), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [888] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(193), 1,
      anon_sym_DOLLAR2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(23), 1,
      sym_line_continuation,
    STATE(50), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(140), 1,
      sym_immediate_expansion,
    STATE(179), 1,
      sym_imm_expansion,
    STATE(292), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [920] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(218), 1,
      anon_sym_DOLLAR2,
    STATE(24), 1,
      sym_line_continuation,
    STATE(32), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(135), 1,
      sym_imm_expansion,
    STATE(149), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(150), 1,
      sym_immediate_expansion,
    ACTIONS(214), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [949] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(218), 1,
      anon_sym_DOLLAR2,
    STATE(24), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(25), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym_imm_expansion,
    STATE(149), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(150), 1,
      sym_immediate_expansion,
    ACTIONS(220), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [978] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(224), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(226), 1,
      anon_sym_DOLLAR2,
    ACTIONS(228), 1,
      aux_sym_image_tag_token1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(33), 1,
      aux_sym_image_tag_repeat1,
    STATE(112), 1,
      sym_immediate_expansion,
    STATE(121), 1,
      sym_imm_expansion,
    ACTIONS(222), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1007] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(218), 1,
      anon_sym_DOLLAR2,
    STATE(27), 1,
      sym_line_continuation,
    STATE(32), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(135), 1,
      sym_imm_expansion,
    STATE(149), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(150), 1,
      sym_immediate_expansion,
    ACTIONS(230), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1036] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      aux_sym_shell_fragment_token1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_command_repeat1,
    STATE(171), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(194), 1,
      sym_comment_line,
    STATE(247), 1,
      sym_shell_fragment,
    STATE(306), 1,
      sym_anon_comment,
  [1067] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      aux_sym_shell_fragment_token1,
    STATE(29), 1,
      sym_line_continuation,
    STATE(31), 1,
      aux_sym_shell_command_repeat1,
    STATE(171), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(194), 1,
      sym_comment_line,
    STATE(306), 1,
      sym_anon_comment,
    STATE(307), 1,
      sym_shell_fragment,
  [1098] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(218), 1,
      anon_sym_DOLLAR2,
    STATE(27), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym_imm_expansion,
    STATE(149), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(150), 1,
      sym_immediate_expansion,
    ACTIONS(234), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1127] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      aux_sym_shell_fragment_token1,
    STATE(31), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_shell_command_repeat1,
    STATE(171), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(194), 1,
      sym_comment_line,
    STATE(280), 1,
      sym_shell_fragment,
    STATE(306), 1,
      sym_anon_comment,
  [1158] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(238), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR2,
    STATE(135), 1,
      sym_imm_expansion,
    STATE(149), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(150), 1,
      sym_immediate_expansion,
    ACTIONS(236), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(32), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1185] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(246), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(248), 1,
      anon_sym_DOLLAR2,
    ACTIONS(251), 1,
      aux_sym_image_tag_token1,
    STATE(112), 1,
      sym_immediate_expansion,
    STATE(121), 1,
      sym_imm_expansion,
    ACTIONS(244), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(33), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1212] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(34), 1,
      sym_line_continuation,
    ACTIONS(254), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(256), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1230] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(218), 1,
      anon_sym_DOLLAR2,
    ACTIONS(258), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(35), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym_imm_expansion,
    STATE(149), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(150), 1,
      sym_immediate_expansion,
  [1258] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(266), 1,
      sym_escape_sequence,
    STATE(36), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(170), 1,
      sym_immediate_expansion,
  [1286] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(37), 1,
      sym_line_continuation,
    ACTIONS(268), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(270), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1304] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(38), 1,
      sym_line_continuation,
    ACTIONS(272), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(274), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1322] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(39), 1,
      sym_line_continuation,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(278), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1340] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(284), 1,
      anon_sym_DOLLAR2,
    ACTIONS(287), 1,
      aux_sym_image_digest_token1,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(164), 1,
      sym_immediate_expansion,
    STATE(40), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1366] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(266), 1,
      sym_escape_sequence,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(170), 1,
      sym_immediate_expansion,
  [1394] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR2,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(300), 1,
      sym_escape_sequence,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(170), 1,
      sym_immediate_expansion,
    STATE(42), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1420] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR2,
    ACTIONS(309), 1,
      aux_sym_image_digest_token1,
    STATE(40), 1,
      aux_sym_image_digest_repeat1,
    STATE(43), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(164), 1,
      sym_immediate_expansion,
  [1448] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(315), 1,
      anon_sym_DOLLAR2,
    STATE(44), 1,
      sym_line_continuation,
    STATE(46), 1,
      aux_sym_path_repeat1,
    STATE(144), 1,
      sym_imm_expansion,
    STATE(154), 1,
      sym_immediate_expansion,
    ACTIONS(311), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1474] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(315), 1,
      anon_sym_DOLLAR2,
    STATE(45), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_path_repeat1,
    STATE(144), 1,
      sym_imm_expansion,
    STATE(154), 1,
      sym_immediate_expansion,
    ACTIONS(317), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1500] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(315), 1,
      anon_sym_DOLLAR2,
    STATE(46), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_path_repeat1,
    STATE(144), 1,
      sym_imm_expansion,
    STATE(154), 1,
      sym_immediate_expansion,
    ACTIONS(319), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1526] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(315), 1,
      anon_sym_DOLLAR2,
    STATE(47), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_path_repeat1,
    STATE(144), 1,
      sym_imm_expansion,
    STATE(154), 1,
      sym_immediate_expansion,
    ACTIONS(321), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1552] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      aux_sym_path_token2,
    ACTIONS(328), 1,
      anon_sym_DOLLAR2,
    STATE(144), 1,
      sym_imm_expansion,
    STATE(154), 1,
      sym_immediate_expansion,
    ACTIONS(323), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(48), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1576] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(218), 1,
      anon_sym_DOLLAR2,
    STATE(35), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym_imm_expansion,
    STATE(149), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(150), 1,
      sym_immediate_expansion,
    STATE(294), 1,
      sym_immediate_user_name_or_group,
  [1604] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      anon_sym_DOLLAR2,
    ACTIONS(197), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    STATE(50), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(140), 1,
      sym_immediate_expansion,
    STATE(179), 1,
      sym_imm_expansion,
  [1632] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(333), 1,
      anon_sym_DASH_DASH,
    STATE(51), 1,
      sym_line_continuation,
    STATE(120), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(264), 1,
      sym_param,
    STATE(313), 1,
      sym_cmd_instruction,
    ACTIONS(331), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [1658] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      aux_sym_expose_port_token1,
    ACTIONS(343), 1,
      sym_semgrep_ellipsis,
    STATE(52), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(176), 2,
      sym_expansion,
      sym_expose_port,
  [1682] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(348), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      aux_sym_expose_port_token1,
    ACTIONS(352), 1,
      sym_semgrep_ellipsis,
    STATE(52), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(176), 2,
      sym_expansion,
      sym_expose_port,
  [1708] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    ACTIONS(357), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(360), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      sym_immediate_expansion,
    STATE(179), 1,
      sym_imm_expansion,
    STATE(54), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1734] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(363), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(365), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1752] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(367), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(369), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1770] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(57), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(373), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1788] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_path_token1,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    ACTIONS(379), 1,
      anon_sym_DASH_DASH,
    STATE(58), 1,
      sym_line_continuation,
    STATE(76), 1,
      sym_expansion,
    STATE(110), 1,
      aux_sym_add_instruction_repeat1,
    STATE(126), 1,
      sym_param,
    STATE(295), 1,
      sym_path,
  [1816] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_path_token1,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    ACTIONS(379), 1,
      anon_sym_DASH_DASH,
    STATE(59), 1,
      sym_line_continuation,
    STATE(76), 1,
      sym_expansion,
    STATE(127), 1,
      aux_sym_add_instruction_repeat1,
    STATE(128), 1,
      sym_param,
    STATE(295), 1,
      sym_path,
  [1844] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(266), 1,
      sym_escape_sequence,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_line_continuation,
    STATE(61), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(170), 1,
      sym_immediate_expansion,
  [1872] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(266), 1,
      sym_escape_sequence,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(61), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(170), 1,
      sym_immediate_expansion,
  [1900] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(266), 1,
      sym_escape_sequence,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(62), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(170), 1,
      sym_immediate_expansion,
  [1928] = 9,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(266), 1,
      sym_escape_sequence,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(170), 1,
      sym_immediate_expansion,
  [1956] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      aux_sym_image_name_token1,
    ACTIONS(393), 1,
      anon_sym_DASH_DASH,
    STATE(14), 1,
      sym_expansion,
    STATE(64), 1,
      sym_line_continuation,
    STATE(98), 1,
      sym_image_name,
    STATE(116), 1,
      sym_param,
    STATE(276), 1,
      sym_image_spec,
  [1984] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(65), 1,
      sym_line_continuation,
    ACTIONS(397), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(395), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2001] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(401), 1,
      aux_sym_path_token2,
    ACTIONS(403), 1,
      anon_sym_DOLLAR2,
    STATE(66), 1,
      sym_line_continuation,
    STATE(86), 1,
      aux_sym_path_repeat1,
    STATE(238), 1,
      sym_immediate_expansion,
    STATE(253), 1,
      sym_imm_expansion,
  [2026] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(67), 1,
      sym_line_continuation,
    ACTIONS(365), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(363), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2043] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    ACTIONS(407), 1,
      aux_sym_expose_port_token1,
    ACTIONS(409), 1,
      sym_semgrep_ellipsis,
    STATE(53), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(68), 1,
      sym_line_continuation,
    STATE(176), 2,
      sym_expansion,
      sym_expose_port,
  [2066] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      aux_sym_env_key_token1,
    ACTIONS(413), 1,
      sym_semgrep_ellipsis,
    STATE(69), 1,
      sym_line_continuation,
    STATE(73), 1,
      aux_sym_env_instruction_repeat1,
    STATE(200), 1,
      sym_env_pair,
    STATE(269), 1,
      sym_env_key,
    STATE(302), 1,
      sym_spaced_env_pair,
  [2091] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      aux_sym_path_token1,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(70), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym_path,
    STATE(283), 1,
      sym_string_array,
  [2116] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(373), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2133] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(72), 1,
      sym_line_continuation,
    ACTIONS(367), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(369), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2150] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      anon_sym_LF,
    ACTIONS(421), 1,
      aux_sym_env_key_token1,
    ACTIONS(423), 1,
      sym_semgrep_ellipsis,
    STATE(73), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_env_instruction_repeat1,
    STATE(200), 1,
      sym_env_pair,
    STATE(333), 1,
      sym_env_key,
  [2175] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      aux_sym_path_token2,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    ACTIONS(429), 1,
      sym_non_newline_whitespace,
    STATE(74), 1,
      sym_line_continuation,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(219), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
  [2200] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(365), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2217] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      aux_sym_path_token2,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    ACTIONS(431), 1,
      sym_non_newline_whitespace,
    STATE(76), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(219), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
  [2242] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(399), 1,
      sym_non_newline_whitespace,
    ACTIONS(425), 1,
      aux_sym_path_token2,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    STATE(77), 1,
      sym_line_continuation,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(219), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
  [2267] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      aux_sym_label_pair_token1,
    ACTIONS(437), 1,
      sym_semgrep_metavariable,
    ACTIONS(439), 1,
      sym_semgrep_ellipsis,
    STATE(78), 1,
      sym_line_continuation,
    STATE(84), 1,
      aux_sym_label_instruction_repeat1,
    STATE(152), 1,
      sym_label_pair,
  [2292] = 5,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym_line_continuation,
    ACTIONS(445), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(443), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [2311] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      aux_sym_path_token2,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    ACTIONS(447), 1,
      sym_non_newline_whitespace,
    STATE(80), 1,
      sym_line_continuation,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(219), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
  [2336] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(254), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(256), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2353] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      aux_sym_env_key_token1,
    ACTIONS(454), 1,
      sym_semgrep_ellipsis,
    STATE(200), 1,
      sym_env_pair,
    STATE(333), 1,
      sym_env_key,
    STATE(82), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2376] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(457), 1,
      aux_sym_path_token2,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(463), 1,
      sym_non_newline_whitespace,
    STATE(219), 1,
      sym_imm_expansion,
    STATE(242), 1,
      sym_immediate_expansion,
    STATE(83), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2399] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      aux_sym_label_pair_token1,
    ACTIONS(470), 1,
      sym_semgrep_metavariable,
    ACTIONS(473), 1,
      sym_semgrep_ellipsis,
    STATE(152), 1,
      sym_label_pair,
    STATE(84), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2422] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      anon_sym_LF,
    ACTIONS(478), 1,
      anon_sym_DOLLAR2,
    ACTIONS(480), 1,
      aux_sym_image_alias_token2,
    STATE(85), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_image_alias_repeat1,
    STATE(190), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
  [2447] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(482), 1,
      aux_sym_path_token2,
    ACTIONS(485), 1,
      anon_sym_DOLLAR2,
    STATE(238), 1,
      sym_immediate_expansion,
    STATE(253), 1,
      sym_imm_expansion,
    STATE(86), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2470] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      aux_sym_path_token2,
    ACTIONS(403), 1,
      anon_sym_DOLLAR2,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(86), 1,
      aux_sym_path_repeat1,
    STATE(87), 1,
      sym_line_continuation,
    STATE(238), 1,
      sym_immediate_expansion,
    STATE(253), 1,
      sym_imm_expansion,
  [2495] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(488), 1,
      anon_sym_LF,
    ACTIONS(490), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(492), 1,
      anon_sym_DOLLAR2,
    STATE(88), 1,
      sym_line_continuation,
    STATE(107), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(221), 1,
      sym_immediate_expansion,
    STATE(229), 1,
      sym_imm_expansion,
  [2520] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(492), 1,
      anon_sym_DOLLAR2,
    ACTIONS(494), 1,
      anon_sym_LF,
    STATE(89), 1,
      sym_line_continuation,
    STATE(109), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(221), 1,
      sym_immediate_expansion,
    STATE(229), 1,
      sym_imm_expansion,
  [2545] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      aux_sym_path_token2,
    ACTIONS(403), 1,
      anon_sym_DOLLAR2,
    ACTIONS(431), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_path_repeat1,
    STATE(90), 1,
      sym_line_continuation,
    STATE(238), 1,
      sym_immediate_expansion,
    STATE(253), 1,
      sym_imm_expansion,
  [2570] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(492), 1,
      anon_sym_DOLLAR2,
    ACTIONS(496), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(91), 1,
      sym_line_continuation,
    STATE(221), 1,
      sym_immediate_expansion,
    STATE(229), 1,
      sym_imm_expansion,
  [2595] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      aux_sym_path_token2,
    ACTIONS(403), 1,
      anon_sym_DOLLAR2,
    ACTIONS(429), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    STATE(238), 1,
      sym_immediate_expansion,
    STATE(253), 1,
      sym_imm_expansion,
  [2620] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(268), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(270), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2637] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment_line,
    STATE(306), 1,
      sym_anon_comment,
    ACTIONS(498), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(94), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [2658] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(272), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(274), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2675] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(276), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(278), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2692] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(505), 1,
      anon_sym_DOLLAR2,
    ACTIONS(508), 1,
      aux_sym_image_alias_token2,
    STATE(190), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
    STATE(97), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2715] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(515), 1,
      anon_sym_COLON,
    ACTIONS(517), 1,
      anon_sym_AT,
    STATE(98), 1,
      sym_line_continuation,
    STATE(173), 1,
      sym_image_tag,
    STATE(274), 1,
      sym_image_digest,
  [2740] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(369), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(367), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2757] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(521), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(519), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2774] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(525), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(523), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2791] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(256), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(254), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2808] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_line_continuation,
    STATE(252), 1,
      sym_array_element,
    STATE(265), 1,
      sym_double_quoted_string,
    ACTIONS(531), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2831] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(478), 1,
      anon_sym_DOLLAR2,
    ACTIONS(480), 1,
      aux_sym_image_alias_token2,
    ACTIONS(533), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym_image_alias_repeat1,
    STATE(104), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
  [2856] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(478), 1,
      anon_sym_DOLLAR2,
    ACTIONS(480), 1,
      aux_sym_image_alias_token2,
    ACTIONS(535), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym_image_alias_repeat1,
    STATE(105), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
  [2881] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(373), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(371), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2898] = 7,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(542), 1,
      anon_sym_DOLLAR2,
    STATE(221), 1,
      sym_immediate_expansion,
    STATE(229), 1,
      sym_imm_expansion,
    STATE(107), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [2921] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(478), 1,
      anon_sym_DOLLAR2,
    ACTIONS(480), 1,
      aux_sym_image_alias_token2,
    ACTIONS(545), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_image_alias_repeat1,
    STATE(108), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
  [2946] = 8,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(492), 1,
      anon_sym_DOLLAR2,
    ACTIONS(547), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(109), 1,
      sym_line_continuation,
    STATE(221), 1,
      sym_immediate_expansion,
    STATE(229), 1,
      sym_imm_expansion,
  [2971] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_path_token1,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(110), 1,
      sym_line_continuation,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(258), 1,
      sym_path,
  [2993] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_path_token1,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(111), 1,
      sym_line_continuation,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(268), 1,
      sym_path,
  [3015] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(551), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(549), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3031] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      aux_sym_path_token1,
    ACTIONS(556), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym_expansion,
    STATE(295), 1,
      sym_path,
    STATE(113), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [3051] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_path_token1,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(114), 1,
      sym_line_continuation,
    STATE(255), 1,
      sym_path,
  [3073] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_line_continuation,
    STATE(265), 1,
      sym_double_quoted_string,
    STATE(278), 1,
      sym_array_element,
    ACTIONS(531), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3093] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      aux_sym_image_name_token1,
    STATE(14), 1,
      sym_expansion,
    STATE(98), 1,
      sym_image_name,
    STATE(116), 1,
      sym_line_continuation,
    STATE(271), 1,
      sym_image_spec,
  [3115] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR2,
    ACTIONS(228), 1,
      aux_sym_image_tag_token1,
    STATE(26), 1,
      aux_sym_image_tag_repeat1,
    STATE(112), 1,
      sym_immediate_expansion,
    STATE(117), 1,
      sym_line_continuation,
    STATE(121), 1,
      sym_imm_expansion,
  [3137] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(307), 1,
      anon_sym_DOLLAR2,
    ACTIONS(309), 1,
      aux_sym_image_digest_token1,
    STATE(43), 1,
      aux_sym_image_digest_repeat1,
    STATE(118), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(164), 1,
      sym_immediate_expansion,
  [3159] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_label_pair_token1,
    ACTIONS(439), 1,
      sym_semgrep_ellipsis,
    ACTIONS(559), 1,
      sym_semgrep_metavariable,
    STATE(78), 1,
      aux_sym_label_instruction_repeat1,
    STATE(119), 1,
      sym_line_continuation,
    STATE(152), 1,
      sym_label_pair,
  [3181] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(333), 1,
      anon_sym_DASH_DASH,
    STATE(120), 1,
      sym_line_continuation,
    STATE(157), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(264), 1,
      sym_param,
    STATE(324), 1,
      sym_cmd_instruction,
  [3203] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(256), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(254), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3219] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(365), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3235] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(563), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(561), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3251] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(369), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(367), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3267] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(373), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3283] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_path_token1,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym_expansion,
    STATE(114), 1,
      aux_sym_add_instruction_repeat1,
    STATE(126), 1,
      sym_line_continuation,
    STATE(295), 1,
      sym_path,
  [3305] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_path_token1,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(127), 1,
      sym_line_continuation,
    STATE(257), 1,
      sym_path,
  [3327] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_path_token1,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym_expansion,
    STATE(111), 1,
      aux_sym_add_instruction_repeat1,
    STATE(128), 1,
      sym_line_continuation,
    STATE(295), 1,
      sym_path,
  [3349] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(254), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3364] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(367), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3377] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(395), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3390] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(367), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3403] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      anon_sym_DOLLAR2,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(373), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3418] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(363), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3431] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(254), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3444] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_DOLLAR2,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(397), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3459] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_DOLLAR2,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(369), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3474] = 5,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(570), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(573), 1,
      anon_sym_BSLASH_LF,
    STATE(138), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [3491] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(575), 1,
      anon_sym_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(577), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3506] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(268), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3519] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(272), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3532] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(276), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3545] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      anon_sym_DOLLAR2,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(365), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3560] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(256), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3575] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(581), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3590] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_path_token1,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(146), 1,
      sym_line_continuation,
    STATE(270), 1,
      sym_path,
  [3609] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(373), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3624] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(583), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3637] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(585), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3650] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(587), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3663] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(591), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3678] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(595), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3693] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(597), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(599), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3708] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_DOLLAR2,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(601), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3723] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_DOLLAR2,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(605), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3738] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(397), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3753] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(611), 1,
      anon_sym_DASH_DASH,
    STATE(264), 1,
      sym_param,
    STATE(157), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [3770] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(369), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3785] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(256), 1,
      aux_sym_from_instruction_token2,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(254), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3800] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      aux_sym_from_instruction_token2,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3815] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(371), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3828] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(614), 1,
      anon_sym_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(616), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3843] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(620), 1,
      aux_sym_from_instruction_token2,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(618), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3858] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      aux_sym_from_instruction_token2,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(622), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3873] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(363), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(365), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3888] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      aux_sym_from_instruction_token2,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(367), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3903] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      aux_sym_image_alias_token1,
    STATE(85), 1,
      sym_expansion,
    STATE(167), 1,
      sym_line_continuation,
    STATE(287), 1,
      sym_image_alias,
  [3922] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(632), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_expansion,
    STATE(168), 1,
      sym_line_continuation,
    STATE(331), 1,
      sym_stopsignal_value,
  [3941] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(634), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(636), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3956] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(638), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(640), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3971] = 6,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(646), 1,
      anon_sym_BSLASH_LF,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(171), 1,
      sym_line_continuation,
  [3990] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(628), 1,
      aux_sym_image_alias_token1,
    STATE(85), 1,
      sym_expansion,
    STATE(172), 1,
      sym_line_continuation,
    STATE(318), 1,
      sym_image_alias,
  [4009] = 6,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(517), 1,
      anon_sym_AT,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      aux_sym_from_instruction_token2,
    STATE(173), 1,
      sym_line_continuation,
    STATE(260), 1,
      sym_image_digest,
  [4028] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym_from_instruction_token2,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4043] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(367), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(369), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4058] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(652), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(654), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4073] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(177), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(373), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4088] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(656), 1,
      aux_sym_path_token1,
    ACTIONS(658), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_expansion,
    STATE(178), 1,
      sym_line_continuation,
    STATE(289), 1,
      sym_path,
  [4107] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(254), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [4120] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(363), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [4133] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(662), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4148] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(371), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [4161] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(666), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4176] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(670), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      sym_expansion,
    STATE(184), 1,
      sym_line_continuation,
    STATE(279), 1,
      sym_user_name_or_group,
  [4195] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(674), 1,
      sym_variable,
    STATE(131), 1,
      sym_expansion_body,
    STATE(185), 1,
      sym_line_continuation,
  [4211] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      sym_variable,
    STATE(186), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym_expansion_body,
  [4227] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(682), 1,
      sym_variable,
    STATE(156), 1,
      sym_expansion_body,
    STATE(187), 1,
      sym_line_continuation,
  [4243] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(686), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [4257] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4269] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(254), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4281] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(690), 1,
      sym_non_newline_whitespace,
    STATE(191), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4295] = 3,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(695), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_BSLASH_LF,
  [4307] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      sym_variable,
    STATE(189), 1,
      sym_expansion_body,
    STATE(193), 1,
      sym_line_continuation,
  [4323] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(701), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [4335] = 5,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      anon_sym_BSLASH_LF,
    STATE(29), 1,
      sym_required_line_continuation,
    STATE(195), 1,
      sym_line_continuation,
    STATE(197), 1,
      aux_sym_shell_command_repeat2,
  [4351] = 5,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(707), 1,
      anon_sym_LF,
    ACTIONS(709), 1,
      sym_non_newline_whitespace,
    STATE(196), 1,
      sym_line_continuation,
    STATE(233), 1,
      aux_sym_volume_instruction_repeat1,
  [4367] = 4,
    ACTIONS(711), 1,
      anon_sym_LF,
    ACTIONS(713), 1,
      anon_sym_BSLASH_LF,
    STATE(29), 1,
      sym_required_line_continuation,
    STATE(197), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [4381] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(716), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4393] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(718), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4405] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(722), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [4419] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      sym_variable,
    STATE(143), 1,
      sym_expansion_body,
    STATE(201), 1,
      sym_line_continuation,
  [4435] = 3,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
    ACTIONS(730), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_BSLASH_LF,
  [4447] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_line_continuation,
    STATE(209), 1,
      aux_sym_string_array_repeat1,
  [4463] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_LBRACE,
    ACTIONS(738), 1,
      sym_variable,
    STATE(204), 1,
      sym_line_continuation,
    STATE(235), 1,
      sym_expansion_body,
  [4479] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
    ACTIONS(742), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [4493] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(674), 1,
      sym_variable,
    STATE(134), 1,
      sym_expansion_body,
    STATE(206), 1,
      sym_line_continuation,
  [4509] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      sym_variable,
    STATE(136), 1,
      sym_expansion_body,
    STATE(207), 1,
      sym_line_continuation,
  [4525] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(208), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4537] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
    STATE(209), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [4551] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      sym_variable,
    STATE(210), 1,
      sym_line_continuation,
    STATE(254), 1,
      sym_expansion_body,
  [4567] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_variable,
    STATE(67), 1,
      sym_expansion_body,
    STATE(211), 1,
      sym_line_continuation,
  [4583] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      sym_variable,
    STATE(212), 1,
      sym_line_continuation,
    STATE(228), 1,
      sym_expansion_body,
  [4599] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(213), 1,
      sym_line_continuation,
    ACTIONS(395), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4611] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(367), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4623] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4635] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      sym_variable,
    STATE(216), 1,
      sym_line_continuation,
    STATE(230), 1,
      sym_expansion_body,
  [4651] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(759), 1,
      sym_variable,
    STATE(122), 1,
      sym_expansion_body,
    STATE(217), 1,
      sym_line_continuation,
  [4667] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_LBRACE,
    ACTIONS(738), 1,
      sym_variable,
    STATE(218), 1,
      sym_line_continuation,
    STATE(224), 1,
      sym_expansion_body,
  [4683] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(256), 1,
      aux_sym_path_token2,
    STATE(219), 1,
      sym_line_continuation,
    ACTIONS(254), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4697] = 5,
    ACTIONS(705), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_required_line_continuation,
    STATE(220), 1,
      sym_line_continuation,
    STATE(249), 1,
      aux_sym_shell_command_repeat2,
  [4713] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(221), 1,
      sym_line_continuation,
    ACTIONS(763), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4725] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_variable,
    STATE(65), 1,
      sym_expansion_body,
    STATE(222), 1,
      sym_line_continuation,
  [4741] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(223), 1,
      sym_line_continuation,
    ACTIONS(395), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4753] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      aux_sym_path_token2,
    STATE(224), 1,
      sym_line_continuation,
    ACTIONS(363), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4767] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(225), 1,
      sym_line_continuation,
    ACTIONS(765), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4779] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(226), 1,
      sym_line_continuation,
    ACTIONS(367), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4791] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym_path_token2,
    STATE(227), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4805] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(228), 1,
      sym_line_continuation,
    ACTIONS(363), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4817] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(229), 1,
      sym_line_continuation,
    ACTIONS(254), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4829] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(397), 1,
      aux_sym_path_token2,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4843] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(767), 1,
      anon_sym_LBRACE,
    ACTIONS(769), 1,
      sym_variable,
    STATE(160), 1,
      sym_expansion_body,
    STATE(231), 1,
      sym_line_continuation,
  [4859] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      aux_sym_path_token2,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(367), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4873] = 5,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      sym_non_newline_whitespace,
    ACTIONS(771), 1,
      anon_sym_LF,
    STATE(191), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(233), 1,
      sym_line_continuation,
  [4889] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      aux_sym_path_token2,
    STATE(234), 1,
      sym_line_continuation,
    ACTIONS(367), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4903] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(397), 1,
      aux_sym_path_token2,
    STATE(235), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4917] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
    ACTIONS(699), 1,
      sym_variable,
    STATE(213), 1,
      sym_expansion_body,
    STATE(236), 1,
      sym_line_continuation,
  [4933] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(605), 1,
      aux_sym_path_token2,
    STATE(237), 1,
      sym_line_continuation,
    ACTIONS(607), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4947] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      aux_sym_path_token2,
    STATE(238), 1,
      sym_line_continuation,
    ACTIONS(603), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4961] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
    ACTIONS(775), 1,
      sym_variable,
    STATE(165), 1,
      sym_expansion_body,
    STATE(239), 1,
      sym_line_continuation,
  [4977] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LF,
    STATE(240), 1,
      sym_line_continuation,
    ACTIONS(591), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [4991] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
    ACTIONS(779), 1,
      sym_variable,
    STATE(55), 1,
      sym_expansion_body,
    STATE(241), 1,
      sym_line_continuation,
  [5007] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      aux_sym_path_token2,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(603), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5021] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(605), 1,
      aux_sym_path_token2,
    STATE(243), 1,
      sym_line_continuation,
    ACTIONS(607), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5035] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym_path_token2,
    STATE(244), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5049] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LF,
    STATE(245), 1,
      sym_line_continuation,
    ACTIONS(581), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5063] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(783), 1,
      sym_variable,
    STATE(75), 1,
      sym_expansion_body,
    STATE(246), 1,
      sym_line_continuation,
  [5079] = 5,
    ACTIONS(705), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_required_line_continuation,
    STATE(195), 1,
      aux_sym_shell_command_repeat2,
    STATE(247), 1,
      sym_line_continuation,
  [5095] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(248), 1,
      sym_line_continuation,
    ACTIONS(787), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [5107] = 5,
    ACTIONS(705), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_required_line_continuation,
    STATE(197), 1,
      aux_sym_shell_command_repeat2,
    STATE(249), 1,
      sym_line_continuation,
  [5123] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(250), 1,
      sym_line_continuation,
    ACTIONS(789), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [5135] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(793), 1,
      sym_variable,
    STATE(180), 1,
      sym_expansion_body,
    STATE(251), 1,
      sym_line_continuation,
  [5151] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      aux_sym_string_array_repeat1,
    STATE(252), 1,
      sym_line_continuation,
  [5167] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(256), 1,
      aux_sym_path_token2,
    STATE(253), 1,
      sym_line_continuation,
    ACTIONS(254), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5181] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      aux_sym_path_token2,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(363), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5195] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      anon_sym_LF,
    ACTIONS(799), 1,
      sym_non_newline_whitespace,
    STATE(255), 1,
      sym_line_continuation,
  [5208] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(801), 1,
      aux_sym_path_token1,
    ACTIONS(803), 1,
      anon_sym_DOLLAR,
    STATE(256), 1,
      sym_line_continuation,
  [5221] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      sym_non_newline_whitespace,
    ACTIONS(805), 1,
      anon_sym_LF,
    STATE(257), 1,
      sym_line_continuation,
  [5234] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      sym_non_newline_whitespace,
    ACTIONS(807), 1,
      anon_sym_LF,
    STATE(258), 1,
      sym_line_continuation,
  [5247] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(809), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      anon_sym_EQ,
    STATE(259), 1,
      sym_line_continuation,
  [5260] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(813), 1,
      anon_sym_LF,
    ACTIONS(815), 1,
      aux_sym_from_instruction_token2,
    STATE(260), 1,
      sym_line_continuation,
  [5273] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(261), 1,
      sym_line_continuation,
    ACTIONS(817), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5284] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(262), 1,
      sym_line_continuation,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5295] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(263), 1,
      sym_line_continuation,
    STATE(298), 1,
      sym_string_array,
  [5308] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(264), 1,
      sym_line_continuation,
    ACTIONS(819), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5319] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(265), 1,
      sym_line_continuation,
    ACTIONS(821), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5330] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      anon_sym_DOLLAR,
    ACTIONS(823), 1,
      aux_sym_path_token1,
    STATE(266), 1,
      sym_line_continuation,
  [5343] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(267), 1,
      sym_line_continuation,
    ACTIONS(825), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [5354] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      sym_non_newline_whitespace,
    ACTIONS(827), 1,
      anon_sym_LF,
    STATE(268), 1,
      sym_line_continuation,
  [5367] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(829), 1,
      anon_sym_EQ,
    ACTIONS(831), 1,
      aux_sym_spaced_env_pair_token1,
    STATE(269), 1,
      sym_line_continuation,
  [5380] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    STATE(270), 1,
      sym_line_continuation,
    ACTIONS(688), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [5391] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(833), 1,
      anon_sym_LF,
    ACTIONS(835), 1,
      aux_sym_from_instruction_token2,
    STATE(271), 1,
      sym_line_continuation,
  [5404] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(837), 1,
      anon_sym_LF,
    ACTIONS(839), 1,
      anon_sym_EQ,
    STATE(272), 1,
      sym_line_continuation,
  [5417] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      anon_sym_DOLLAR,
    ACTIONS(823), 1,
      aux_sym_image_name_token1,
    STATE(273), 1,
      sym_line_continuation,
  [5430] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_LF,
    ACTIONS(843), 1,
      aux_sym_from_instruction_token2,
    STATE(274), 1,
      sym_line_continuation,
  [5443] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(845), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(847), 1,
      sym_semgrep_metavariable,
    STATE(275), 1,
      sym_line_continuation,
  [5456] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(849), 1,
      anon_sym_LF,
    ACTIONS(851), 1,
      aux_sym_from_instruction_token2,
    STATE(276), 1,
      sym_line_continuation,
  [5469] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(277), 1,
      sym_line_continuation,
    ACTIONS(579), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5480] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(278), 1,
      sym_line_continuation,
    ACTIONS(747), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5491] = 4,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(853), 1,
      anon_sym_LF,
    ACTIONS(855), 1,
      anon_sym_COLON,
    STATE(279), 1,
      sym_line_continuation,
  [5504] = 3,
    ACTIONS(857), 1,
      anon_sym_LF,
    ACTIONS(859), 1,
      anon_sym_BSLASH_LF,
    STATE(280), 1,
      sym_line_continuation,
  [5514] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(861), 1,
      anon_sym_LF,
    STATE(281), 1,
      sym_line_continuation,
  [5524] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(863), 1,
      aux_sym_expansion_body_token1,
    STATE(282), 1,
      sym_line_continuation,
  [5534] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(865), 1,
      anon_sym_LF,
    STATE(283), 1,
      sym_line_continuation,
  [5544] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(867), 1,
      anon_sym_EQ,
    STATE(284), 1,
      sym_line_continuation,
  [5554] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      anon_sym_EQ,
    STATE(285), 1,
      sym_line_continuation,
  [5564] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(869), 1,
      aux_sym_param_token1,
    STATE(286), 1,
      sym_line_continuation,
  [5574] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(871), 1,
      anon_sym_LF,
    STATE(287), 1,
      sym_line_continuation,
  [5584] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    STATE(288), 1,
      sym_line_continuation,
  [5594] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(875), 1,
      anon_sym_LF,
    STATE(289), 1,
      sym_line_continuation,
  [5604] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(877), 1,
      anon_sym_LF,
    STATE(290), 1,
      sym_line_continuation,
  [5614] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(879), 1,
      anon_sym_LF,
    STATE(291), 1,
      sym_line_continuation,
  [5624] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(881), 1,
      anon_sym_LF,
    STATE(292), 1,
      sym_line_continuation,
  [5634] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(883), 1,
      anon_sym_LF,
    STATE(293), 1,
      sym_line_continuation,
  [5644] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(885), 1,
      anon_sym_LF,
    STATE(294), 1,
      sym_line_continuation,
  [5654] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(887), 1,
      sym_non_newline_whitespace,
    STATE(295), 1,
      sym_line_continuation,
  [5664] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(889), 1,
      anon_sym_LF,
    STATE(296), 1,
      sym_line_continuation,
  [5674] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(891), 1,
      anon_sym_LF,
    STATE(297), 1,
      sym_line_continuation,
  [5684] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(893), 1,
      anon_sym_LF,
    STATE(298), 1,
      sym_line_continuation,
  [5694] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(895), 1,
      anon_sym_LF,
    STATE(299), 1,
      sym_line_continuation,
  [5704] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      anon_sym_LF,
    STATE(300), 1,
      sym_line_continuation,
  [5714] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      anon_sym_LF,
    STATE(301), 1,
      sym_line_continuation,
  [5724] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      anon_sym_LF,
    STATE(302), 1,
      sym_line_continuation,
  [5734] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      sym_line_continuation,
  [5744] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(901), 1,
      aux_sym_param_token2,
    STATE(304), 1,
      sym_line_continuation,
  [5754] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(903), 1,
      anon_sym_LF,
    STATE(305), 1,
      sym_line_continuation,
  [5764] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(905), 1,
      anon_sym_LF,
    STATE(306), 1,
      sym_line_continuation,
  [5774] = 3,
    ACTIONS(711), 1,
      anon_sym_LF,
    ACTIONS(907), 1,
      anon_sym_BSLASH_LF,
    STATE(307), 1,
      sym_line_continuation,
  [5784] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(909), 1,
      anon_sym_LF,
    STATE(308), 1,
      sym_line_continuation,
  [5794] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym_line_continuation,
  [5804] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(913), 1,
      aux_sym_param_token2,
    STATE(310), 1,
      sym_line_continuation,
  [5814] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(915), 1,
      anon_sym_LF,
    STATE(311), 1,
      sym_line_continuation,
  [5824] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(917), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(312), 1,
      sym_line_continuation,
  [5834] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(919), 1,
      anon_sym_LF,
    STATE(313), 1,
      sym_line_continuation,
  [5844] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_line_continuation,
  [5854] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(923), 1,
      anon_sym_LF,
    STATE(315), 1,
      sym_line_continuation,
  [5864] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(925), 1,
      anon_sym_EQ,
    STATE(316), 1,
      sym_line_continuation,
  [5874] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      sym_line_continuation,
  [5884] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(929), 1,
      anon_sym_LF,
    STATE(318), 1,
      sym_line_continuation,
  [5894] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(931), 1,
      aux_sym_param_token2,
    STATE(319), 1,
      sym_line_continuation,
  [5904] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      sym_line_continuation,
  [5914] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(935), 1,
      anon_sym_EQ,
    STATE(321), 1,
      sym_line_continuation,
  [5924] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_line_continuation,
  [5934] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_line_continuation,
  [5944] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(941), 1,
      anon_sym_LF,
    STATE(324), 1,
      sym_line_continuation,
  [5954] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(943), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(325), 1,
      sym_line_continuation,
  [5964] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      sym_line_continuation,
  [5974] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(947), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(327), 1,
      sym_line_continuation,
  [5984] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      sym_line_continuation,
  [5994] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(951), 1,
      anon_sym_LF,
    STATE(329), 1,
      sym_line_continuation,
  [6004] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_line_continuation,
  [6014] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(955), 1,
      anon_sym_LF,
    STATE(331), 1,
      sym_line_continuation,
  [6024] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      sym_line_continuation,
  [6034] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(829), 1,
      anon_sym_EQ,
    STATE(333), 1,
      sym_line_continuation,
  [6044] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      sym_line_continuation,
  [6054] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(961), 1,
      anon_sym_LF,
    STATE(335), 1,
      sym_line_continuation,
  [6064] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      sym_line_continuation,
  [6074] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      sym_line_continuation,
  [6084] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(967), 1,
      aux_sym_expansion_body_token1,
    STATE(338), 1,
      sym_line_continuation,
  [6094] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(969), 1,
      anon_sym_EQ,
    STATE(339), 1,
      sym_line_continuation,
  [6104] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(971), 1,
      aux_sym_expansion_body_token1,
    STATE(340), 1,
      sym_line_continuation,
  [6114] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(973), 1,
      anon_sym_EQ,
    STATE(341), 1,
      sym_line_continuation,
  [6124] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(975), 1,
      aux_sym_expansion_body_token1,
    STATE(342), 1,
      sym_line_continuation,
  [6134] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(977), 1,
      aux_sym_expansion_body_token1,
    STATE(343), 1,
      sym_line_continuation,
  [6144] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(979), 1,
      aux_sym_expansion_body_token1,
    STATE(344), 1,
      sym_line_continuation,
  [6154] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(981), 1,
      aux_sym_expansion_body_token1,
    STATE(345), 1,
      sym_line_continuation,
  [6164] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(983), 1,
      aux_sym_expansion_body_token1,
    STATE(346), 1,
      sym_line_continuation,
  [6174] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(985), 1,
      aux_sym_expansion_body_token1,
    STATE(347), 1,
      sym_line_continuation,
  [6184] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(987), 1,
      aux_sym_expansion_body_token1,
    STATE(348), 1,
      sym_line_continuation,
  [6194] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(989), 1,
      aux_sym_expansion_body_token1,
    STATE(349), 1,
      sym_line_continuation,
  [6204] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(991), 1,
      aux_sym_expansion_body_token1,
    STATE(350), 1,
      sym_line_continuation,
  [6214] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(993), 1,
      aux_sym_expansion_body_token1,
    STATE(351), 1,
      sym_line_continuation,
  [6224] = 3,
    ACTIONS(132), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(995), 1,
      aux_sym_expansion_body_token1,
    STATE(352), 1,
      sym_line_continuation,
  [6234] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(997), 1,
      aux_sym_param_token1,
    STATE(353), 1,
      sym_line_continuation,
  [6244] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(999), 1,
      aux_sym_param_token1,
    STATE(354), 1,
      sym_line_continuation,
  [6254] = 1,
    ACTIONS(1001), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 406,
  [SMALL_STATE(9)] = 445,
  [SMALL_STATE(10)] = 486,
  [SMALL_STATE(11)] = 519,
  [SMALL_STATE(12)] = 550,
  [SMALL_STATE(13)] = 580,
  [SMALL_STATE(14)] = 608,
  [SMALL_STATE(15)] = 638,
  [SMALL_STATE(16)] = 668,
  [SMALL_STATE(17)] = 698,
  [SMALL_STATE(18)] = 730,
  [SMALL_STATE(19)] = 762,
  [SMALL_STATE(20)] = 794,
  [SMALL_STATE(21)] = 824,
  [SMALL_STATE(22)] = 856,
  [SMALL_STATE(23)] = 888,
  [SMALL_STATE(24)] = 920,
  [SMALL_STATE(25)] = 949,
  [SMALL_STATE(26)] = 978,
  [SMALL_STATE(27)] = 1007,
  [SMALL_STATE(28)] = 1036,
  [SMALL_STATE(29)] = 1067,
  [SMALL_STATE(30)] = 1098,
  [SMALL_STATE(31)] = 1127,
  [SMALL_STATE(32)] = 1158,
  [SMALL_STATE(33)] = 1185,
  [SMALL_STATE(34)] = 1212,
  [SMALL_STATE(35)] = 1230,
  [SMALL_STATE(36)] = 1258,
  [SMALL_STATE(37)] = 1286,
  [SMALL_STATE(38)] = 1304,
  [SMALL_STATE(39)] = 1322,
  [SMALL_STATE(40)] = 1340,
  [SMALL_STATE(41)] = 1366,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1420,
  [SMALL_STATE(44)] = 1448,
  [SMALL_STATE(45)] = 1474,
  [SMALL_STATE(46)] = 1500,
  [SMALL_STATE(47)] = 1526,
  [SMALL_STATE(48)] = 1552,
  [SMALL_STATE(49)] = 1576,
  [SMALL_STATE(50)] = 1604,
  [SMALL_STATE(51)] = 1632,
  [SMALL_STATE(52)] = 1658,
  [SMALL_STATE(53)] = 1682,
  [SMALL_STATE(54)] = 1708,
  [SMALL_STATE(55)] = 1734,
  [SMALL_STATE(56)] = 1752,
  [SMALL_STATE(57)] = 1770,
  [SMALL_STATE(58)] = 1788,
  [SMALL_STATE(59)] = 1816,
  [SMALL_STATE(60)] = 1844,
  [SMALL_STATE(61)] = 1872,
  [SMALL_STATE(62)] = 1900,
  [SMALL_STATE(63)] = 1928,
  [SMALL_STATE(64)] = 1956,
  [SMALL_STATE(65)] = 1984,
  [SMALL_STATE(66)] = 2001,
  [SMALL_STATE(67)] = 2026,
  [SMALL_STATE(68)] = 2043,
  [SMALL_STATE(69)] = 2066,
  [SMALL_STATE(70)] = 2091,
  [SMALL_STATE(71)] = 2116,
  [SMALL_STATE(72)] = 2133,
  [SMALL_STATE(73)] = 2150,
  [SMALL_STATE(74)] = 2175,
  [SMALL_STATE(75)] = 2200,
  [SMALL_STATE(76)] = 2217,
  [SMALL_STATE(77)] = 2242,
  [SMALL_STATE(78)] = 2267,
  [SMALL_STATE(79)] = 2292,
  [SMALL_STATE(80)] = 2311,
  [SMALL_STATE(81)] = 2336,
  [SMALL_STATE(82)] = 2353,
  [SMALL_STATE(83)] = 2376,
  [SMALL_STATE(84)] = 2399,
  [SMALL_STATE(85)] = 2422,
  [SMALL_STATE(86)] = 2447,
  [SMALL_STATE(87)] = 2470,
  [SMALL_STATE(88)] = 2495,
  [SMALL_STATE(89)] = 2520,
  [SMALL_STATE(90)] = 2545,
  [SMALL_STATE(91)] = 2570,
  [SMALL_STATE(92)] = 2595,
  [SMALL_STATE(93)] = 2620,
  [SMALL_STATE(94)] = 2637,
  [SMALL_STATE(95)] = 2658,
  [SMALL_STATE(96)] = 2675,
  [SMALL_STATE(97)] = 2692,
  [SMALL_STATE(98)] = 2715,
  [SMALL_STATE(99)] = 2740,
  [SMALL_STATE(100)] = 2757,
  [SMALL_STATE(101)] = 2774,
  [SMALL_STATE(102)] = 2791,
  [SMALL_STATE(103)] = 2808,
  [SMALL_STATE(104)] = 2831,
  [SMALL_STATE(105)] = 2856,
  [SMALL_STATE(106)] = 2881,
  [SMALL_STATE(107)] = 2898,
  [SMALL_STATE(108)] = 2921,
  [SMALL_STATE(109)] = 2946,
  [SMALL_STATE(110)] = 2971,
  [SMALL_STATE(111)] = 2993,
  [SMALL_STATE(112)] = 3015,
  [SMALL_STATE(113)] = 3031,
  [SMALL_STATE(114)] = 3051,
  [SMALL_STATE(115)] = 3073,
  [SMALL_STATE(116)] = 3093,
  [SMALL_STATE(117)] = 3115,
  [SMALL_STATE(118)] = 3137,
  [SMALL_STATE(119)] = 3159,
  [SMALL_STATE(120)] = 3181,
  [SMALL_STATE(121)] = 3203,
  [SMALL_STATE(122)] = 3219,
  [SMALL_STATE(123)] = 3235,
  [SMALL_STATE(124)] = 3251,
  [SMALL_STATE(125)] = 3267,
  [SMALL_STATE(126)] = 3283,
  [SMALL_STATE(127)] = 3305,
  [SMALL_STATE(128)] = 3327,
  [SMALL_STATE(129)] = 3349,
  [SMALL_STATE(130)] = 3364,
  [SMALL_STATE(131)] = 3377,
  [SMALL_STATE(132)] = 3390,
  [SMALL_STATE(133)] = 3403,
  [SMALL_STATE(134)] = 3418,
  [SMALL_STATE(135)] = 3431,
  [SMALL_STATE(136)] = 3444,
  [SMALL_STATE(137)] = 3459,
  [SMALL_STATE(138)] = 3474,
  [SMALL_STATE(139)] = 3491,
  [SMALL_STATE(140)] = 3506,
  [SMALL_STATE(141)] = 3519,
  [SMALL_STATE(142)] = 3532,
  [SMALL_STATE(143)] = 3545,
  [SMALL_STATE(144)] = 3560,
  [SMALL_STATE(145)] = 3575,
  [SMALL_STATE(146)] = 3590,
  [SMALL_STATE(147)] = 3609,
  [SMALL_STATE(148)] = 3624,
  [SMALL_STATE(149)] = 3637,
  [SMALL_STATE(150)] = 3650,
  [SMALL_STATE(151)] = 3663,
  [SMALL_STATE(152)] = 3678,
  [SMALL_STATE(153)] = 3693,
  [SMALL_STATE(154)] = 3708,
  [SMALL_STATE(155)] = 3723,
  [SMALL_STATE(156)] = 3738,
  [SMALL_STATE(157)] = 3753,
  [SMALL_STATE(158)] = 3770,
  [SMALL_STATE(159)] = 3785,
  [SMALL_STATE(160)] = 3800,
  [SMALL_STATE(161)] = 3815,
  [SMALL_STATE(162)] = 3828,
  [SMALL_STATE(163)] = 3843,
  [SMALL_STATE(164)] = 3858,
  [SMALL_STATE(165)] = 3873,
  [SMALL_STATE(166)] = 3888,
  [SMALL_STATE(167)] = 3903,
  [SMALL_STATE(168)] = 3922,
  [SMALL_STATE(169)] = 3941,
  [SMALL_STATE(170)] = 3956,
  [SMALL_STATE(171)] = 3971,
  [SMALL_STATE(172)] = 3990,
  [SMALL_STATE(173)] = 4009,
  [SMALL_STATE(174)] = 4028,
  [SMALL_STATE(175)] = 4043,
  [SMALL_STATE(176)] = 4058,
  [SMALL_STATE(177)] = 4073,
  [SMALL_STATE(178)] = 4088,
  [SMALL_STATE(179)] = 4107,
  [SMALL_STATE(180)] = 4120,
  [SMALL_STATE(181)] = 4133,
  [SMALL_STATE(182)] = 4148,
  [SMALL_STATE(183)] = 4161,
  [SMALL_STATE(184)] = 4176,
  [SMALL_STATE(185)] = 4195,
  [SMALL_STATE(186)] = 4211,
  [SMALL_STATE(187)] = 4227,
  [SMALL_STATE(188)] = 4243,
  [SMALL_STATE(189)] = 4257,
  [SMALL_STATE(190)] = 4269,
  [SMALL_STATE(191)] = 4281,
  [SMALL_STATE(192)] = 4295,
  [SMALL_STATE(193)] = 4307,
  [SMALL_STATE(194)] = 4323,
  [SMALL_STATE(195)] = 4335,
  [SMALL_STATE(196)] = 4351,
  [SMALL_STATE(197)] = 4367,
  [SMALL_STATE(198)] = 4381,
  [SMALL_STATE(199)] = 4393,
  [SMALL_STATE(200)] = 4405,
  [SMALL_STATE(201)] = 4419,
  [SMALL_STATE(202)] = 4435,
  [SMALL_STATE(203)] = 4447,
  [SMALL_STATE(204)] = 4463,
  [SMALL_STATE(205)] = 4479,
  [SMALL_STATE(206)] = 4493,
  [SMALL_STATE(207)] = 4509,
  [SMALL_STATE(208)] = 4525,
  [SMALL_STATE(209)] = 4537,
  [SMALL_STATE(210)] = 4551,
  [SMALL_STATE(211)] = 4567,
  [SMALL_STATE(212)] = 4583,
  [SMALL_STATE(213)] = 4599,
  [SMALL_STATE(214)] = 4611,
  [SMALL_STATE(215)] = 4623,
  [SMALL_STATE(216)] = 4635,
  [SMALL_STATE(217)] = 4651,
  [SMALL_STATE(218)] = 4667,
  [SMALL_STATE(219)] = 4683,
  [SMALL_STATE(220)] = 4697,
  [SMALL_STATE(221)] = 4713,
  [SMALL_STATE(222)] = 4725,
  [SMALL_STATE(223)] = 4741,
  [SMALL_STATE(224)] = 4753,
  [SMALL_STATE(225)] = 4767,
  [SMALL_STATE(226)] = 4779,
  [SMALL_STATE(227)] = 4791,
  [SMALL_STATE(228)] = 4805,
  [SMALL_STATE(229)] = 4817,
  [SMALL_STATE(230)] = 4829,
  [SMALL_STATE(231)] = 4843,
  [SMALL_STATE(232)] = 4859,
  [SMALL_STATE(233)] = 4873,
  [SMALL_STATE(234)] = 4889,
  [SMALL_STATE(235)] = 4903,
  [SMALL_STATE(236)] = 4917,
  [SMALL_STATE(237)] = 4933,
  [SMALL_STATE(238)] = 4947,
  [SMALL_STATE(239)] = 4961,
  [SMALL_STATE(240)] = 4977,
  [SMALL_STATE(241)] = 4991,
  [SMALL_STATE(242)] = 5007,
  [SMALL_STATE(243)] = 5021,
  [SMALL_STATE(244)] = 5035,
  [SMALL_STATE(245)] = 5049,
  [SMALL_STATE(246)] = 5063,
  [SMALL_STATE(247)] = 5079,
  [SMALL_STATE(248)] = 5095,
  [SMALL_STATE(249)] = 5107,
  [SMALL_STATE(250)] = 5123,
  [SMALL_STATE(251)] = 5135,
  [SMALL_STATE(252)] = 5151,
  [SMALL_STATE(253)] = 5167,
  [SMALL_STATE(254)] = 5181,
  [SMALL_STATE(255)] = 5195,
  [SMALL_STATE(256)] = 5208,
  [SMALL_STATE(257)] = 5221,
  [SMALL_STATE(258)] = 5234,
  [SMALL_STATE(259)] = 5247,
  [SMALL_STATE(260)] = 5260,
  [SMALL_STATE(261)] = 5273,
  [SMALL_STATE(262)] = 5284,
  [SMALL_STATE(263)] = 5295,
  [SMALL_STATE(264)] = 5308,
  [SMALL_STATE(265)] = 5319,
  [SMALL_STATE(266)] = 5330,
  [SMALL_STATE(267)] = 5343,
  [SMALL_STATE(268)] = 5354,
  [SMALL_STATE(269)] = 5367,
  [SMALL_STATE(270)] = 5380,
  [SMALL_STATE(271)] = 5391,
  [SMALL_STATE(272)] = 5404,
  [SMALL_STATE(273)] = 5417,
  [SMALL_STATE(274)] = 5430,
  [SMALL_STATE(275)] = 5443,
  [SMALL_STATE(276)] = 5456,
  [SMALL_STATE(277)] = 5469,
  [SMALL_STATE(278)] = 5480,
  [SMALL_STATE(279)] = 5491,
  [SMALL_STATE(280)] = 5504,
  [SMALL_STATE(281)] = 5514,
  [SMALL_STATE(282)] = 5524,
  [SMALL_STATE(283)] = 5534,
  [SMALL_STATE(284)] = 5544,
  [SMALL_STATE(285)] = 5554,
  [SMALL_STATE(286)] = 5564,
  [SMALL_STATE(287)] = 5574,
  [SMALL_STATE(288)] = 5584,
  [SMALL_STATE(289)] = 5594,
  [SMALL_STATE(290)] = 5604,
  [SMALL_STATE(291)] = 5614,
  [SMALL_STATE(292)] = 5624,
  [SMALL_STATE(293)] = 5634,
  [SMALL_STATE(294)] = 5644,
  [SMALL_STATE(295)] = 5654,
  [SMALL_STATE(296)] = 5664,
  [SMALL_STATE(297)] = 5674,
  [SMALL_STATE(298)] = 5684,
  [SMALL_STATE(299)] = 5694,
  [SMALL_STATE(300)] = 5704,
  [SMALL_STATE(301)] = 5714,
  [SMALL_STATE(302)] = 5724,
  [SMALL_STATE(303)] = 5734,
  [SMALL_STATE(304)] = 5744,
  [SMALL_STATE(305)] = 5754,
  [SMALL_STATE(306)] = 5764,
  [SMALL_STATE(307)] = 5774,
  [SMALL_STATE(308)] = 5784,
  [SMALL_STATE(309)] = 5794,
  [SMALL_STATE(310)] = 5804,
  [SMALL_STATE(311)] = 5814,
  [SMALL_STATE(312)] = 5824,
  [SMALL_STATE(313)] = 5834,
  [SMALL_STATE(314)] = 5844,
  [SMALL_STATE(315)] = 5854,
  [SMALL_STATE(316)] = 5864,
  [SMALL_STATE(317)] = 5874,
  [SMALL_STATE(318)] = 5884,
  [SMALL_STATE(319)] = 5894,
  [SMALL_STATE(320)] = 5904,
  [SMALL_STATE(321)] = 5914,
  [SMALL_STATE(322)] = 5924,
  [SMALL_STATE(323)] = 5934,
  [SMALL_STATE(324)] = 5944,
  [SMALL_STATE(325)] = 5954,
  [SMALL_STATE(326)] = 5964,
  [SMALL_STATE(327)] = 5974,
  [SMALL_STATE(328)] = 5984,
  [SMALL_STATE(329)] = 5994,
  [SMALL_STATE(330)] = 6004,
  [SMALL_STATE(331)] = 6014,
  [SMALL_STATE(332)] = 6024,
  [SMALL_STATE(333)] = 6034,
  [SMALL_STATE(334)] = 6044,
  [SMALL_STATE(335)] = 6054,
  [SMALL_STATE(336)] = 6064,
  [SMALL_STATE(337)] = 6074,
  [SMALL_STATE(338)] = 6084,
  [SMALL_STATE(339)] = 6094,
  [SMALL_STATE(340)] = 6104,
  [SMALL_STATE(341)] = 6114,
  [SMALL_STATE(342)] = 6124,
  [SMALL_STATE(343)] = 6134,
  [SMALL_STATE(344)] = 6144,
  [SMALL_STATE(345)] = 6154,
  [SMALL_STATE(346)] = 6164,
  [SMALL_STATE(347)] = 6174,
  [SMALL_STATE(348)] = 6184,
  [SMALL_STATE(349)] = 6194,
  [SMALL_STATE(350)] = 6204,
  [SMALL_STATE(351)] = 6214,
  [SMALL_STATE(352)] = 6224,
  [SMALL_STATE(353)] = 6234,
  [SMALL_STATE(354)] = 6244,
  [SMALL_STATE(355)] = 6254,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(311),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 32),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 32),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(241),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(39),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(211),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(100),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(246),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(96),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, .production_id = 16),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, .production_id = 16),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, .production_id = 42),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, .production_id = 42),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(148),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(206),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(217),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(123),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 47),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 47),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(231),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(163),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(239),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(169),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, .production_id = 44),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, .production_id = 44),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 13),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 13),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(155),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(201),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(187),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(79),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(162),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, .production_id = 10),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(251),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(141),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, .production_id = 38),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, .production_id = 38),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, .production_id = 56),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, .production_id = 56),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 13),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 13),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, .production_id = 8),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, .production_id = 9),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, .production_id = 9),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(285),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(205),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(243),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(218),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(316),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(321),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(153),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(237),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(210),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, .production_id = 22),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(325),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(193),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(198),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 28),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 28),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, .production_id = 39),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(225),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(212),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, .production_id = 39),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, .production_id = 22),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(74),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(204),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 41),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 41),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(202),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(192),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, .production_id = 9),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, .production_id = 9),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, .production_id = 36),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 33),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 33),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(354),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 43),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 43),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 46),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 46),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 29),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 29),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 49),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 49),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 51),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 51),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(146),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, .production_id = 15),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(250),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, .production_id = 58),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(115),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, .production_id = 37),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, .production_id = 15),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, .production_id = 35),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, .production_id = 34),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, .production_id = 35),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 20),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 45),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 45),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 57),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 57),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, .production_id = 11),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, .production_id = 34),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, .production_id = 2),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 19),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, .production_id = 2),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 17),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, .production_id = 15),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 59),
  [873] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, .production_id = 18),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, .production_id = 14),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, .production_id = 27),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 55),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 54),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 53),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, .production_id = 26),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, .production_id = 25),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 52),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, .production_id = 6),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, .production_id = 24),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, .production_id = 7),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 40),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, .production_id = 24),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, .production_id = 21),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, .production_id = 23),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2, .production_id = 31),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
