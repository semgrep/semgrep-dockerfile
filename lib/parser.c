#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 389
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 58
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 67

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
  anon_sym_mount = 53,
  anon_sym_COMMA = 54,
  aux_sym_mount_param_param_token1 = 55,
  aux_sym_image_alias_token1 = 56,
  aux_sym_image_alias_token2 = 57,
  aux_sym_shell_fragment_token1 = 58,
  aux_sym_shell_fragment_token2 = 59,
  aux_sym_shell_fragment_token3 = 60,
  anon_sym_BSLASH_LF = 61,
  anon_sym_POUND = 62,
  anon_sym_LBRACK = 63,
  anon_sym_COMMA2 = 64,
  anon_sym_RBRACK = 65,
  anon_sym_DQUOTE = 66,
  aux_sym_json_string_token1 = 67,
  sym_json_escape_sequence = 68,
  aux_sym_double_quoted_string_token1 = 69,
  anon_sym_BSLASH = 70,
  anon_sym_SQUOTE = 71,
  aux_sym_single_quoted_string_token1 = 72,
  aux_sym_unquoted_string_token1 = 73,
  anon_sym_BSLASH2 = 74,
  sym_double_quoted_escape_sequence = 75,
  sym_single_quoted_escape_sequence = 76,
  sym_non_newline_whitespace = 77,
  sym_comment = 78,
  sym_semgrep_metavariable = 79,
  sym_semgrep_ellipsis = 80,
  sym_source_file = 81,
  sym_instruction = 82,
  sym_from_instruction = 83,
  sym_run_instruction = 84,
  sym_cmd_instruction = 85,
  sym_label_instruction = 86,
  sym_expose_instruction = 87,
  sym_env_instruction = 88,
  sym_add_instruction = 89,
  sym_copy_instruction = 90,
  sym_entrypoint_instruction = 91,
  sym_volume_instruction = 92,
  sym_user_instruction = 93,
  sym_user_name_or_group = 94,
  sym_immediate_user_name_or_group = 95,
  sym_immediate_user_name_or_group_fragment = 96,
  sym_workdir_instruction = 97,
  sym_arg_instruction = 98,
  sym_onbuild_instruction = 99,
  sym_stopsignal_instruction = 100,
  sym_stopsignal_value = 101,
  sym_healthcheck_instruction = 102,
  sym_shell_instruction = 103,
  sym_maintainer_instruction = 104,
  sym_cross_build_instruction = 105,
  sym_path = 106,
  sym_expansion = 107,
  sym_immediate_expansion = 108,
  sym_imm_expansion = 109,
  sym_expansion_body = 110,
  sym_env_pair = 111,
  sym_spaced_env_pair = 112,
  sym_env_key = 113,
  sym_expose_port = 114,
  sym_label_pair = 115,
  sym_image_spec = 116,
  sym_image_name = 117,
  sym_image_tag = 118,
  sym_image_digest = 119,
  sym_param = 120,
  sym_mount_param = 121,
  sym_mount_param_param = 122,
  sym_image_alias = 123,
  sym_shell_command = 124,
  sym_shell_fragment = 125,
  sym_line_continuation = 126,
  sym_required_line_continuation = 127,
  sym_comment_line = 128,
  sym_anon_comment = 129,
  sym_json_string_array = 130,
  sym_json_string = 131,
  sym_double_quoted_string = 132,
  sym_single_quoted_string = 133,
  sym_unquoted_string = 134,
  sym_array_element = 135,
  aux_sym_source_file_repeat1 = 136,
  aux_sym_run_instruction_repeat1 = 137,
  aux_sym_label_instruction_repeat1 = 138,
  aux_sym_expose_instruction_repeat1 = 139,
  aux_sym_env_instruction_repeat1 = 140,
  aux_sym_add_instruction_repeat1 = 141,
  aux_sym_volume_instruction_repeat1 = 142,
  aux_sym_user_name_or_group_repeat1 = 143,
  aux_sym_stopsignal_value_repeat1 = 144,
  aux_sym_healthcheck_instruction_repeat1 = 145,
  aux_sym_path_repeat1 = 146,
  aux_sym_image_name_repeat1 = 147,
  aux_sym_image_tag_repeat1 = 148,
  aux_sym_image_digest_repeat1 = 149,
  aux_sym_mount_param_repeat1 = 150,
  aux_sym_image_alias_repeat1 = 151,
  aux_sym_shell_command_repeat1 = 152,
  aux_sym_shell_command_repeat2 = 153,
  aux_sym_shell_fragment_repeat1 = 154,
  aux_sym_json_string_array_repeat1 = 155,
  aux_sym_json_string_repeat1 = 156,
  aux_sym_double_quoted_string_repeat1 = 157,
  aux_sym_single_quoted_string_repeat1 = 158,
  aux_sym_unquoted_string_repeat1 = 159,
  alias_sym_imm_tok_at = 160,
  alias_sym_imm_tok_bslashspace = 161,
  alias_sym_imm_tok_colon = 162,
  alias_sym_imm_tok_comma = 163,
  alias_sym_imm_tok_dollar = 164,
  alias_sym_imm_tok_eq = 165,
  alias_sym_imm_tok_lcurl = 166,
  alias_sym_imm_tok_mount = 167,
  alias_sym_imm_tok_pat_0ab9261 = 168,
  alias_sym_imm_tok_pat_0c7fc22 = 169,
  alias_sym_imm_tok_pat_2b37705 = 170,
  alias_sym_imm_tok_pat_3a2a380 = 171,
  alias_sym_imm_tok_pat_3d340f6 = 172,
  alias_sym_imm_tok_pat_441cd81 = 173,
  alias_sym_imm_tok_pat_589b0f8 = 174,
  alias_sym_imm_tok_pat_7642c4f = 175,
  alias_sym_imm_tok_pat_8713919 = 176,
  alias_sym_imm_tok_pat_9a14b5c = 177,
  alias_sym_imm_tok_pat_9f6bbb9 = 178,
  alias_sym_imm_tok_pat_bcfc287 = 179,
  alias_sym_imm_tok_pat_d2727a0 = 180,
  alias_sym_imm_tok_pat_f43f746 = 181,
  alias_sym_imm_tok_pat_f46f69d = 182,
  alias_sym_imm_tok_pat_f6e1de8 = 183,
  alias_sym_imm_tok_rcurl = 184,
  alias_sym_pat_05444c2 = 185,
  alias_sym_pat_1167a92 = 186,
  alias_sym_pat_217c202 = 187,
  alias_sym_pat_2b6adbc = 188,
  alias_sym_pat_4128122 = 189,
  alias_sym_pat_441cd81 = 190,
  alias_sym_pat_4a2f38a = 191,
  alias_sym_pat_4de4cb9 = 192,
  alias_sym_pat_4fd4a56 = 193,
  alias_sym_pat_8165e5f = 194,
  alias_sym_pat_9a14b5c = 195,
  alias_sym_pat_add = 196,
  alias_sym_pat_arg = 197,
  alias_sym_pat_as = 198,
  alias_sym_pat_b1120d3 = 199,
  alias_sym_pat_cmd = 200,
  alias_sym_pat_copy = 201,
  alias_sym_pat_dea634e = 202,
  alias_sym_pat_eda9032 = 203,
  alias_sym_pat_entr = 204,
  alias_sym_pat_env = 205,
  alias_sym_pat_expose = 206,
  alias_sym_pat_from = 207,
  alias_sym_pat_heal = 208,
  alias_sym_pat_label = 209,
  alias_sym_pat_main = 210,
  alias_sym_pat_onbu = 211,
  alias_sym_pat_run = 212,
  alias_sym_pat_shell = 213,
  alias_sym_pat_stop = 214,
  alias_sym_pat_user = 215,
  alias_sym_pat_volume = 216,
  alias_sym_pat_work = 217,
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
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_token1] = "json_string_token1",
  [sym_json_escape_sequence] = "json_escape_sequence",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "double_quoted_escape_sequence",
  [sym_single_quoted_escape_sequence] = "single_quoted_escape_sequence",
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
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_image_alias] = "image_alias",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [sym_comment_line] = "comment_line",
  [sym_anon_comment] = "anon_comment",
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_array_element] = "array_element",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
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
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [alias_sym_imm_tok_at] = "imm_tok_at",
  [alias_sym_imm_tok_bslashspace] = "imm_tok_bslashspace",
  [alias_sym_imm_tok_colon] = "imm_tok_colon",
  [alias_sym_imm_tok_comma] = "imm_tok_comma",
  [alias_sym_imm_tok_dollar] = "imm_tok_dollar",
  [alias_sym_imm_tok_eq] = "imm_tok_eq",
  [alias_sym_imm_tok_lcurl] = "imm_tok_lcurl",
  [alias_sym_imm_tok_mount] = "imm_tok_mount",
  [alias_sym_imm_tok_pat_0ab9261] = "imm_tok_pat_0ab9261",
  [alias_sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [alias_sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [alias_sym_imm_tok_pat_3a2a380] = "imm_tok_pat_3a2a380",
  [alias_sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [alias_sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [alias_sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [alias_sym_imm_tok_pat_7642c4f] = "imm_tok_pat_7642c4f",
  [alias_sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [alias_sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [alias_sym_imm_tok_pat_9f6bbb9] = "imm_tok_pat_9f6bbb9",
  [alias_sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [alias_sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [alias_sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [alias_sym_imm_tok_pat_f46f69d] = "imm_tok_pat_f46f69d",
  [alias_sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [alias_sym_imm_tok_rcurl] = "imm_tok_rcurl",
  [alias_sym_pat_05444c2] = "pat_05444c2",
  [alias_sym_pat_1167a92] = "pat_1167a92",
  [alias_sym_pat_217c202] = "pat_217c202",
  [alias_sym_pat_2b6adbc] = "pat_2b6adbc",
  [alias_sym_pat_4128122] = "pat_4128122",
  [alias_sym_pat_441cd81] = "pat_441cd81",
  [alias_sym_pat_4a2f38a] = "pat_4a2f38a",
  [alias_sym_pat_4de4cb9] = "pat_4de4cb9",
  [alias_sym_pat_4fd4a56] = "pat_4fd4a56",
  [alias_sym_pat_8165e5f] = "pat_8165e5f",
  [alias_sym_pat_9a14b5c] = "pat_9a14b5c",
  [alias_sym_pat_add] = "pat_add",
  [alias_sym_pat_arg] = "pat_arg",
  [alias_sym_pat_as] = "pat_as",
  [alias_sym_pat_b1120d3] = "pat_b1120d3",
  [alias_sym_pat_cmd] = "pat_cmd",
  [alias_sym_pat_copy] = "pat_copy",
  [alias_sym_pat_dea634e] = "pat_dea634e",
  [alias_sym_pat_eda9032] = "pat_eda9032",
  [alias_sym_pat_entr] = "pat_entr",
  [alias_sym_pat_env] = "pat_env",
  [alias_sym_pat_expose] = "pat_expose",
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
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_token1] = aux_sym_json_string_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_single_quoted_escape_sequence,
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
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_image_alias] = sym_image_alias,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [sym_comment_line] = sym_comment_line,
  [sym_anon_comment] = sym_anon_comment,
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_array_element] = sym_array_element,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
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
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [alias_sym_imm_tok_at] = alias_sym_imm_tok_at,
  [alias_sym_imm_tok_bslashspace] = alias_sym_imm_tok_bslashspace,
  [alias_sym_imm_tok_colon] = alias_sym_imm_tok_colon,
  [alias_sym_imm_tok_comma] = alias_sym_imm_tok_comma,
  [alias_sym_imm_tok_dollar] = alias_sym_imm_tok_dollar,
  [alias_sym_imm_tok_eq] = alias_sym_imm_tok_eq,
  [alias_sym_imm_tok_lcurl] = alias_sym_imm_tok_lcurl,
  [alias_sym_imm_tok_mount] = alias_sym_imm_tok_mount,
  [alias_sym_imm_tok_pat_0ab9261] = alias_sym_imm_tok_pat_0ab9261,
  [alias_sym_imm_tok_pat_0c7fc22] = alias_sym_imm_tok_pat_0c7fc22,
  [alias_sym_imm_tok_pat_2b37705] = alias_sym_imm_tok_pat_2b37705,
  [alias_sym_imm_tok_pat_3a2a380] = alias_sym_imm_tok_pat_3a2a380,
  [alias_sym_imm_tok_pat_3d340f6] = alias_sym_imm_tok_pat_3d340f6,
  [alias_sym_imm_tok_pat_441cd81] = alias_sym_imm_tok_pat_441cd81,
  [alias_sym_imm_tok_pat_589b0f8] = alias_sym_imm_tok_pat_589b0f8,
  [alias_sym_imm_tok_pat_7642c4f] = alias_sym_imm_tok_pat_7642c4f,
  [alias_sym_imm_tok_pat_8713919] = alias_sym_imm_tok_pat_8713919,
  [alias_sym_imm_tok_pat_9a14b5c] = alias_sym_imm_tok_pat_9a14b5c,
  [alias_sym_imm_tok_pat_9f6bbb9] = alias_sym_imm_tok_pat_9f6bbb9,
  [alias_sym_imm_tok_pat_bcfc287] = alias_sym_imm_tok_pat_bcfc287,
  [alias_sym_imm_tok_pat_d2727a0] = alias_sym_imm_tok_pat_d2727a0,
  [alias_sym_imm_tok_pat_f43f746] = alias_sym_imm_tok_pat_f43f746,
  [alias_sym_imm_tok_pat_f46f69d] = alias_sym_imm_tok_pat_f46f69d,
  [alias_sym_imm_tok_pat_f6e1de8] = alias_sym_imm_tok_pat_f6e1de8,
  [alias_sym_imm_tok_rcurl] = alias_sym_imm_tok_rcurl,
  [alias_sym_pat_05444c2] = alias_sym_pat_05444c2,
  [alias_sym_pat_1167a92] = alias_sym_pat_1167a92,
  [alias_sym_pat_217c202] = alias_sym_pat_217c202,
  [alias_sym_pat_2b6adbc] = alias_sym_pat_2b6adbc,
  [alias_sym_pat_4128122] = alias_sym_pat_4128122,
  [alias_sym_pat_441cd81] = alias_sym_pat_441cd81,
  [alias_sym_pat_4a2f38a] = alias_sym_pat_4a2f38a,
  [alias_sym_pat_4de4cb9] = alias_sym_pat_4de4cb9,
  [alias_sym_pat_4fd4a56] = alias_sym_pat_4fd4a56,
  [alias_sym_pat_8165e5f] = alias_sym_pat_8165e5f,
  [alias_sym_pat_9a14b5c] = alias_sym_pat_9a14b5c,
  [alias_sym_pat_add] = alias_sym_pat_add,
  [alias_sym_pat_arg] = alias_sym_pat_arg,
  [alias_sym_pat_as] = alias_sym_pat_as,
  [alias_sym_pat_b1120d3] = alias_sym_pat_b1120d3,
  [alias_sym_pat_cmd] = alias_sym_pat_cmd,
  [alias_sym_pat_copy] = alias_sym_pat_copy,
  [alias_sym_pat_dea634e] = alias_sym_pat_dea634e,
  [alias_sym_pat_eda9032] = alias_sym_pat_eda9032,
  [alias_sym_pat_entr] = alias_sym_pat_entr,
  [alias_sym_pat_env] = alias_sym_pat_env,
  [alias_sym_pat_expose] = alias_sym_pat_expose,
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
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
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
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
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
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
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
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
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
  [aux_sym_run_instruction_repeat1] = {
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
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
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
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
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
  [alias_sym_imm_tok_comma] = {
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
  [alias_sym_imm_tok_mount] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0ab9261] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3a2a380] = {
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
  [alias_sym_imm_tok_pat_7642c4f] = {
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
  [alias_sym_imm_tok_pat_9f6bbb9] = {
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
  [alias_sym_imm_tok_pat_f46f69d] = {
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
  [alias_sym_pat_05444c2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_217c202] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_2b6adbc] = {
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
  [alias_sym_pat_b1120d3] = {
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
  [alias_sym_pat_dea634e] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_eda9032] = {
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
  [18] = {.index = 1, .length = 1},
  [20] = {.index = 2, .length = 1},
  [21] = {.index = 2, .length = 1},
  [30] = {.index = 3, .length = 2},
  [31] = {.index = 5, .length = 2},
  [33] = {.index = 0, .length = 1},
  [41] = {.index = 7, .length = 1},
  [46] = {.index = 8, .length = 3},
  [50] = {.index = 11, .length = 2},
  [51] = {.index = 11, .length = 2},
  [52] = {.index = 13, .length = 2},
  [53] = {.index = 13, .length = 2},
  [54] = {.index = 15, .length = 2},
  [55] = {.index = 17, .length = 2},
  [56] = {.index = 17, .length = 2},
  [58] = {.index = 19, .length = 2},
  [60] = {.index = 21, .length = 1},
  [61] = {.index = 19, .length = 2},
  [64] = {.index = 22, .length = 3},
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
  [22] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
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
    [0] = alias_sym_pat_b1120d3,
  },
  [5] = {
    [0] = alias_sym_pat_dea634e,
  },
  [6] = {
    [0] = alias_sym_pat_eda9032,
  },
  [7] = {
    [0] = alias_sym_pat_run,
  },
  [8] = {
    [0] = alias_sym_pat_cmd,
  },
  [9] = {
    [0] = alias_sym_pat_label,
  },
  [10] = {
    [0] = alias_sym_pat_217c202,
  },
  [11] = {
    [0] = alias_sym_pat_expose,
  },
  [12] = {
    [0] = alias_sym_pat_2b6adbc,
  },
  [13] = {
    [0] = alias_sym_pat_env,
  },
  [14] = {
    [0] = alias_sym_pat_1167a92,
  },
  [15] = {
    [0] = alias_sym_pat_entr,
  },
  [16] = {
    [0] = alias_sym_pat_volume,
  },
  [17] = {
    [0] = alias_sym_pat_05444c2,
  },
  [18] = {
    [0] = alias_sym_pat_user,
  },
  [19] = {
    [0] = alias_sym_pat_work,
  },
  [20] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
  },
  [21] = {
    [0] = alias_sym_pat_arg,
  },
  [22] = {
    [0] = alias_sym_pat_onbu,
  },
  [23] = {
    [0] = alias_sym_pat_441cd81,
  },
  [24] = {
    [0] = alias_sym_pat_stop,
  },
  [25] = {
    [0] = alias_sym_pat_heal,
  },
  [26] = {
    [0] = alias_sym_pat_shell,
  },
  [27] = {
    [0] = alias_sym_pat_main,
    [1] = alias_sym_pat_4fd4a56,
  },
  [28] = {
    [0] = alias_sym_pat_4a2f38a,
    [1] = alias_sym_pat_4fd4a56,
  },
  [29] = {
    [0] = alias_sym_imm_tok_pat_2b37705,
  },
  [32] = {
    [1] = alias_sym_pat_4fd4a56,
  },
  [33] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [34] = {
    [0] = alias_sym_imm_tok_pat_0c7fc22,
  },
  [35] = {
    [0] = alias_sym_pat_add,
  },
  [36] = {
    [0] = alias_sym_pat_copy,
  },
  [37] = {
    [0] = alias_sym_imm_tok_pat_7642c4f,
  },
  [38] = {
    [0] = alias_sym_imm_tok_pat_441cd81,
  },
  [39] = {
    [0] = alias_sym_imm_tok_dollar,
  },
  [40] = {
    [0] = alias_sym_pat_9a14b5c,
  },
  [41] = {
    [0] = alias_sym_pat_from,
    [2] = alias_sym_pat_as,
  },
  [42] = {
    [0] = alias_sym_imm_tok_pat_bcfc287,
  },
  [43] = {
    [0] = alias_sym_imm_tok_colon,
  },
  [44] = {
    [0] = alias_sym_imm_tok_pat_d2727a0,
  },
  [45] = {
    [0] = alias_sym_imm_tok_at,
  },
  [47] = {
    [0] = alias_sym_imm_tok_pat_3a2a380,
  },
  [48] = {
    [0] = alias_sym_imm_tok_pat_9f6bbb9,
  },
  [49] = {
    [0] = alias_sym_imm_tok_bslashspace,
  },
  [50] = {
    [0] = alias_sym_pat_4128122,
    [1] = alias_sym_imm_tok_eq,
  },
  [51] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [52] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [53] = {
    [1] = alias_sym_imm_tok_pat_3d340f6,
  },
  [54] = {
    [0] = alias_sym_pat_user,
    [2] = alias_sym_imm_tok_colon,
  },
  [55] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
    [2] = alias_sym_imm_tok_eq,
  },
  [56] = {
    [0] = alias_sym_pat_arg,
    [2] = alias_sym_imm_tok_eq,
  },
  [57] = {
    [0] = alias_sym_imm_tok_lcurl,
    [1] = alias_sym_imm_tok_pat_8713919,
    [2] = alias_sym_imm_tok_rcurl,
  },
  [58] = {
    [1] = alias_sym_imm_tok_pat_f43f746,
    [2] = alias_sym_imm_tok_eq,
    [3] = alias_sym_imm_tok_pat_f6e1de8,
  },
  [59] = {
    [0] = alias_sym_imm_tok_pat_9a14b5c,
  },
  [60] = {
    [0] = alias_sym_pat_from,
    [3] = alias_sym_pat_as,
  },
  [61] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [62] = {
    [0] = alias_sym_imm_tok_pat_589b0f8,
  },
  [63] = {
    [0] = alias_sym_imm_tok_pat_0ab9261,
  },
  [64] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [65] = {
    [0] = alias_sym_imm_tok_pat_f46f69d,
    [1] = alias_sym_imm_tok_eq,
    [2] = alias_sym_imm_tok_pat_f46f69d,
  },
  [66] = {
    [0] = alias_sym_imm_tok_comma,
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
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(279);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(253);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(253);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 48:
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(287);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(246);
      END_STATE();
    case 61:
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 62:
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(195);
      END_STATE();
    case 106:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 117:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 156:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 163:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 164:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 164},
  [5] = {.lex_state = 164},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 164},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 41},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 164},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 40},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 37},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 39},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 164},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 39},
  [129] = {.lex_state = 38},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 164},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 46},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 39},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 39},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 45},
  [152] = {.lex_state = 39},
  [153] = {.lex_state = 42},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 164},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 21},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 23},
  [182] = {.lex_state = 23},
  [183] = {.lex_state = 33},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 33},
  [189] = {.lex_state = 23},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 23},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 29},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 23},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 25},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 25},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 56},
  [213] = {.lex_state = 56},
  [214] = {.lex_state = 56},
  [215] = {.lex_state = 56},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 56},
  [218] = {.lex_state = 56},
  [219] = {.lex_state = 56},
  [220] = {.lex_state = 56},
  [221] = {.lex_state = 56},
  [222] = {.lex_state = 56},
  [223] = {.lex_state = 56},
  [224] = {.lex_state = 56},
  [225] = {.lex_state = 56},
  [226] = {.lex_state = 56},
  [227] = {.lex_state = 164},
  [228] = {.lex_state = 56},
  [229] = {.lex_state = 56},
  [230] = {.lex_state = 56},
  [231] = {.lex_state = 56},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 56},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 56},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 37},
  [240] = {.lex_state = 37},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 23},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 56},
  [249] = {.lex_state = 37},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 37},
  [255] = {.lex_state = 14},
  [256] = {.lex_state = 29},
  [257] = {.lex_state = 15},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 23},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 15},
  [266] = {.lex_state = 15},
  [267] = {.lex_state = 29},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 37},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 15},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 37},
  [276] = {.lex_state = 164},
  [277] = {.lex_state = 164},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 52},
  [280] = {.lex_state = 42},
  [281] = {.lex_state = 18},
  [282] = {.lex_state = 38},
  [283] = {.lex_state = 164},
  [284] = {.lex_state = 18},
  [285] = {.lex_state = 164},
  [286] = {.lex_state = 164},
  [287] = {.lex_state = 39},
  [288] = {.lex_state = 164},
  [289] = {.lex_state = 47},
  [290] = {.lex_state = 164},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 23},
  [293] = {.lex_state = 23},
  [294] = {.lex_state = 23},
  [295] = {.lex_state = 52},
  [296] = {.lex_state = 164},
  [297] = {.lex_state = 60},
  [298] = {.lex_state = 164},
  [299] = {.lex_state = 60},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 39},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 164},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 164},
  [317] = {.lex_state = 200},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 59},
  [321] = {.lex_state = 61},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 164},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 164},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 200},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 200},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 60},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 61},
  [336] = {.lex_state = 5},
  [337] = {.lex_state = 5},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 5},
  [342] = {.lex_state = 164},
  [343] = {.lex_state = 61},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 62},
  [346] = {.lex_state = 164},
  [347] = {.lex_state = 61},
  [348] = {.lex_state = 37},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 164},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 164},
  [354] = {.lex_state = 164},
  [355] = {.lex_state = 5},
  [356] = {.lex_state = 164},
  [357] = {.lex_state = 164},
  [358] = {.lex_state = 59},
  [359] = {.lex_state = 164},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 164},
  [362] = {.lex_state = 164},
  [363] = {.lex_state = 164},
  [364] = {.lex_state = 5},
  [365] = {.lex_state = 164},
  [366] = {.lex_state = 164},
  [367] = {.lex_state = 164},
  [368] = {.lex_state = 164},
  [369] = {.lex_state = 164},
  [370] = {.lex_state = 164},
  [371] = {.lex_state = 62},
  [372] = {.lex_state = 164},
  [373] = {.lex_state = 62},
  [374] = {.lex_state = 164},
  [375] = {.lex_state = 62},
  [376] = {.lex_state = 164},
  [377] = {.lex_state = 62},
  [378] = {.lex_state = 62},
  [379] = {.lex_state = 62},
  [380] = {.lex_state = 62},
  [381] = {.lex_state = 62},
  [382] = {.lex_state = 62},
  [383] = {.lex_state = 62},
  [384] = {.lex_state = 62},
  [385] = {.lex_state = 62},
  [386] = {.lex_state = 62},
  [387] = {.lex_state = 59},
  [388] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(323),
    [sym_instruction] = STATE(328),
    [sym_from_instruction] = STATE(326),
    [sym_run_instruction] = STATE(326),
    [sym_cmd_instruction] = STATE(326),
    [sym_label_instruction] = STATE(326),
    [sym_expose_instruction] = STATE(326),
    [sym_env_instruction] = STATE(326),
    [sym_add_instruction] = STATE(326),
    [sym_copy_instruction] = STATE(326),
    [sym_entrypoint_instruction] = STATE(326),
    [sym_volume_instruction] = STATE(326),
    [sym_user_instruction] = STATE(326),
    [sym_workdir_instruction] = STATE(326),
    [sym_arg_instruction] = STATE(326),
    [sym_onbuild_instruction] = STATE(326),
    [sym_stopsignal_instruction] = STATE(326),
    [sym_healthcheck_instruction] = STATE(326),
    [sym_shell_instruction] = STATE(326),
    [sym_maintainer_instruction] = STATE(326),
    [sym_cross_build_instruction] = STATE(326),
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
    STATE(328), 1,
      sym_instruction,
    ACTIONS(111), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(326), 19,
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
    STATE(328), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(326), 19,
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
    STATE(322), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(326), 19,
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
  [324] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    STATE(6), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_run_instruction_repeat1,
    STATE(23), 1,
      aux_sym_shell_command_repeat1,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_comment_line,
    STATE(264), 1,
      sym_shell_fragment,
    STATE(352), 1,
      sym_anon_comment,
    STATE(68), 2,
      sym_param,
      sym_mount_param,
    STATE(364), 2,
      sym_shell_command,
      sym_json_string_array,
  [378] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    STATE(6), 1,
      aux_sym_run_instruction_repeat1,
    STATE(7), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_shell_command_repeat1,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_comment_line,
    STATE(264), 1,
      sym_shell_fragment,
    STATE(352), 1,
      sym_anon_comment,
    STATE(68), 2,
      sym_param,
      sym_mount_param,
    STATE(313), 2,
      sym_shell_command,
      sym_json_string_array,
  [432] = 13,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH2,
    STATE(8), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(99), 1,
      sym_imm_expansion,
    STATE(115), 1,
      sym_immediate_expansion,
    ACTIONS(134), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(271), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [475] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    STATE(9), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_shell_command_repeat1,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_comment_line,
    STATE(264), 1,
      sym_shell_fragment,
    STATE(352), 1,
      sym_anon_comment,
    STATE(360), 2,
      sym_shell_command,
      sym_json_string_array,
  [519] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    STATE(10), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_shell_command_repeat1,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_comment_line,
    STATE(264), 1,
      sym_shell_fragment,
    STATE(352), 1,
      sym_anon_comment,
    STATE(309), 2,
      sym_shell_command,
      sym_json_string_array,
  [563] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    STATE(11), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(184), 1,
      sym_immediate_expansion,
    STATE(337), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [599] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    STATE(12), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(184), 1,
      sym_immediate_expansion,
    STATE(332), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [635] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    STATE(13), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(184), 1,
      sym_immediate_expansion,
    STATE(334), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [671] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_DOLLAR2,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(162), 1,
      anon_sym_BSLASH2,
    STATE(14), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(46), 1,
      sym_immediate_expansion,
    STATE(47), 1,
      sym_imm_expansion,
    STATE(192), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [707] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_DOLLAR2,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(162), 1,
      anon_sym_BSLASH2,
    STATE(15), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(46), 1,
      sym_immediate_expansion,
    STATE(47), 1,
      sym_imm_expansion,
    STATE(190), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [743] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(162), 1,
      anon_sym_BSLASH2,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(170), 1,
      aux_sym_unquoted_string_token1,
    STATE(16), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(46), 1,
      sym_immediate_expansion,
    STATE(47), 1,
      sym_imm_expansion,
    ACTIONS(168), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [776] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      anon_sym_DOLLAR2,
    ACTIONS(179), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(182), 1,
      anon_sym_BSLASH2,
    STATE(46), 1,
      sym_immediate_expansion,
    STATE(47), 1,
      sym_imm_expansion,
    STATE(17), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(177), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [807] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(185), 1,
      anon_sym_DASH_DASH,
    STATE(18), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(68), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(188), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(190), 3,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [832] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token2,
    STATE(19), 1,
      sym_line_continuation,
    STATE(55), 1,
      aux_sym_shell_command_repeat1,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_comment_line,
    STATE(308), 1,
      sym_shell_fragment,
    STATE(352), 1,
      sym_anon_comment,
  [866] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(194), 1,
      anon_sym_DOLLAR2,
    ACTIONS(197), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(200), 1,
      anon_sym_BSLASH2,
    STATE(99), 1,
      sym_imm_expansion,
    STATE(115), 1,
      sym_immediate_expansion,
    ACTIONS(177), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [896] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token2,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_comment_line,
    STATE(351), 1,
      sym_shell_fragment,
    STATE(352), 1,
      sym_anon_comment,
  [930] = 10,
    ACTIONS(132), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH2,
    ACTIONS(164), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(99), 1,
      sym_imm_expansion,
    STATE(115), 1,
      sym_immediate_expansion,
    ACTIONS(168), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [962] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token2,
    STATE(23), 1,
      sym_line_continuation,
    STATE(55), 1,
      aux_sym_shell_command_repeat1,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_comment_line,
    STATE(274), 1,
      sym_shell_fragment,
    STATE(352), 1,
      sym_anon_comment,
  [996] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(208), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(203), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1018] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(212), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(214), 1,
      anon_sym_DOLLAR2,
    ACTIONS(216), 1,
      aux_sym_image_name_token2,
    STATE(25), 1,
      sym_line_continuation,
    STATE(26), 1,
      aux_sym_image_name_repeat1,
    STATE(73), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(210), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1048] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(220), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(222), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_image_name_token2,
    STATE(73), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    STATE(26), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(218), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1076] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_mount_param_repeat1,
    STATE(27), 1,
      sym_line_continuation,
    ACTIONS(232), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(228), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1100] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(214), 1,
      anon_sym_DOLLAR2,
    ACTIONS(216), 1,
      aux_sym_image_name_token2,
    ACTIONS(236), 1,
      aux_sym_from_instruction_token2,
    STATE(28), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_image_name_repeat1,
    STATE(73), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(234), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1130] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(214), 1,
      anon_sym_DOLLAR2,
    ACTIONS(216), 1,
      aux_sym_image_name_token2,
    ACTIONS(240), 1,
      aux_sym_from_instruction_token2,
    STATE(26), 1,
      aux_sym_image_name_repeat1,
    STATE(29), 1,
      sym_line_continuation,
    STATE(73), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(238), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1160] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(214), 1,
      anon_sym_DOLLAR2,
    ACTIONS(216), 1,
      aux_sym_image_name_token2,
    ACTIONS(244), 1,
      aux_sym_from_instruction_token2,
    STATE(25), 1,
      aux_sym_image_name_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(73), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(242), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1190] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_mount_param_repeat1,
    STATE(31), 1,
      sym_line_continuation,
    ACTIONS(248), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(246), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1214] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    STATE(32), 1,
      sym_line_continuation,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(121), 1,
      sym_imm_expansion,
    STATE(134), 1,
      sym_immediate_expansion,
  [1245] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(121), 1,
      sym_imm_expansion,
    STATE(134), 1,
      sym_immediate_expansion,
  [1276] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(121), 1,
      sym_imm_expansion,
    STATE(134), 1,
      sym_immediate_expansion,
  [1307] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(35), 1,
      sym_line_continuation,
    STATE(121), 1,
      sym_imm_expansion,
    STATE(134), 1,
      sym_immediate_expansion,
  [1338] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    ACTIONS(277), 1,
      sym_double_quoted_escape_sequence,
    STATE(121), 1,
      sym_imm_expansion,
    STATE(134), 1,
      sym_immediate_expansion,
    STATE(36), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1367] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(37), 1,
      sym_line_continuation,
    ACTIONS(282), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(280), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1386] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    STATE(38), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(180), 1,
      sym_imm_expansion,
    ACTIONS(284), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1415] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(39), 1,
      sym_line_continuation,
    ACTIONS(292), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(290), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1434] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    STATE(40), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(180), 1,
      sym_imm_expansion,
    ACTIONS(294), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1463] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    STATE(41), 1,
      sym_line_continuation,
    STATE(43), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(180), 1,
      sym_imm_expansion,
    ACTIONS(296), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1492] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(302), 1,
      anon_sym_DOLLAR2,
    ACTIONS(305), 1,
      aux_sym_image_tag_token1,
    STATE(142), 1,
      sym_imm_expansion,
    STATE(148), 1,
      sym_immediate_expansion,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(42), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1519] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(313), 1,
      anon_sym_DOLLAR2,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(180), 1,
      sym_imm_expansion,
    ACTIONS(308), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(43), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1546] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(320), 1,
      anon_sym_DOLLAR2,
    ACTIONS(322), 1,
      aux_sym_image_tag_token1,
    STATE(42), 1,
      aux_sym_image_tag_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym_imm_expansion,
    STATE(148), 1,
      sym_immediate_expansion,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1575] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    STATE(43), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(180), 1,
      sym_imm_expansion,
    ACTIONS(324), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1604] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(46), 1,
      sym_line_continuation,
    ACTIONS(326), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(328), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1622] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(47), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(332), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1640] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    ACTIONS(164), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(184), 1,
      sym_immediate_expansion,
  [1668] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      aux_sym_image_name_token1,
    ACTIONS(338), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_expansion,
    STATE(49), 1,
      sym_line_continuation,
    STATE(93), 1,
      sym_image_name,
    STATE(129), 1,
      sym_param,
    STATE(301), 1,
      sym_image_spec,
  [1696] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    STATE(50), 1,
      sym_line_continuation,
    STATE(64), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(180), 1,
      sym_imm_expansion,
    STATE(311), 1,
      sym_immediate_user_name_or_group,
  [1724] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      aux_sym_path_token1,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(344), 1,
      anon_sym_DASH_DASH,
    STATE(51), 1,
      sym_line_continuation,
    STATE(108), 1,
      sym_expansion,
    STATE(128), 1,
      sym_param,
    STATE(146), 1,
      aux_sym_add_instruction_repeat1,
    STATE(348), 1,
      sym_path,
  [1752] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      aux_sym_path_token1,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(344), 1,
      anon_sym_DASH_DASH,
    STATE(52), 1,
      sym_line_continuation,
    STATE(108), 1,
      sym_expansion,
    STATE(144), 1,
      aux_sym_add_instruction_repeat1,
    STATE(145), 1,
      sym_param,
    STATE(348), 1,
      sym_path,
  [1780] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(348), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      aux_sym_expose_port_token1,
    ACTIONS(354), 1,
      sym_semgrep_ellipsis,
    STATE(53), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(197), 2,
      sym_expansion,
      sym_expose_port,
  [1804] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(361), 1,
      anon_sym_DOLLAR2,
    ACTIONS(363), 1,
      aux_sym_image_digest_token1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(70), 1,
      aux_sym_image_digest_repeat1,
    STATE(169), 1,
      sym_immediate_expansion,
    STATE(173), 1,
      sym_imm_expansion,
  [1832] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(183), 1,
      sym_comment_line,
    STATE(352), 1,
      sym_anon_comment,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(365), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1854] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(372), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(370), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1872] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(376), 1,
      aux_sym_path_token2,
    ACTIONS(379), 1,
      anon_sym_DOLLAR2,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
    ACTIONS(374), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(57), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1896] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      aux_sym_expose_port_token1,
    ACTIONS(388), 1,
      sym_semgrep_ellipsis,
    STATE(53), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(58), 1,
      sym_line_continuation,
    STATE(197), 2,
      sym_expansion,
      sym_expose_port,
  [1922] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(392), 1,
      anon_sym_DASH_DASH,
    STATE(59), 1,
      sym_line_continuation,
    STATE(136), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(288), 1,
      sym_param,
    STATE(338), 1,
      sym_cmd_instruction,
    ACTIONS(390), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [1948] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_line_continuation,
    ACTIONS(394), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(396), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1966] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(61), 1,
      sym_line_continuation,
    ACTIONS(398), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(400), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1984] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(404), 1,
      aux_sym_path_token2,
    ACTIONS(406), 1,
      anon_sym_DOLLAR2,
    STATE(57), 1,
      aux_sym_path_repeat1,
    STATE(62), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
    ACTIONS(402), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2010] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(410), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2028] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR2,
    ACTIONS(412), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(180), 1,
      sym_imm_expansion,
  [2056] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(404), 1,
      aux_sym_path_token2,
    ACTIONS(406), 1,
      anon_sym_DOLLAR2,
    STATE(57), 1,
      aux_sym_path_repeat1,
    STATE(65), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
    ACTIONS(414), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2082] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_line_continuation,
    ACTIONS(416), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(418), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2100] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      anon_sym_DOLLAR2,
    ACTIONS(423), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(426), 1,
      anon_sym_BSLASH2,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(184), 1,
      sym_immediate_expansion,
    STATE(67), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [2126] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(68), 1,
      sym_line_continuation,
    ACTIONS(431), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(429), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2144] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(69), 1,
      sym_line_continuation,
    ACTIONS(433), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(435), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2162] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(441), 1,
      anon_sym_DOLLAR2,
    ACTIONS(444), 1,
      aux_sym_image_digest_token1,
    STATE(169), 1,
      sym_immediate_expansion,
    STATE(173), 1,
      sym_imm_expansion,
    STATE(70), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [2188] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(404), 1,
      aux_sym_path_token2,
    ACTIONS(406), 1,
      anon_sym_DOLLAR2,
    STATE(62), 1,
      aux_sym_path_repeat1,
    STATE(71), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
    ACTIONS(447), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2214] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(404), 1,
      aux_sym_path_token2,
    ACTIONS(406), 1,
      anon_sym_DOLLAR2,
    STATE(65), 1,
      aux_sym_path_repeat1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_imm_expansion,
    STATE(199), 1,
      sym_immediate_expansion,
    ACTIONS(449), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [2240] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(453), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(451), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2257] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      aux_sym_path_token1,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(74), 1,
      sym_line_continuation,
    STATE(245), 1,
      sym_path,
    STATE(315), 1,
      sym_json_string_array,
  [2282] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      anon_sym_DOLLAR2,
    ACTIONS(463), 1,
      aux_sym_image_alias_token2,
    STATE(75), 1,
      sym_line_continuation,
    STATE(102), 1,
      aux_sym_image_alias_repeat1,
    STATE(210), 1,
      sym_immediate_expansion,
    STATE(236), 1,
      sym_imm_expansion,
  [2307] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_DOLLAR2,
    ACTIONS(463), 1,
      aux_sym_image_alias_token2,
    ACTIONS(465), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym_line_continuation,
    STATE(105), 1,
      aux_sym_image_alias_repeat1,
    STATE(210), 1,
      sym_immediate_expansion,
    STATE(236), 1,
      sym_imm_expansion,
  [2332] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      aux_sym_path_token2,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    STATE(77), 1,
      sym_line_continuation,
    STATE(97), 1,
      aux_sym_path_repeat1,
    STATE(261), 1,
      sym_imm_expansion,
    STATE(273), 1,
      sym_immediate_expansion,
  [2357] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(435), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(433), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2374] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    STATE(79), 1,
      sym_line_continuation,
    STATE(107), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(233), 1,
      sym_immediate_expansion,
    STATE(252), 1,
      sym_imm_expansion,
  [2399] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_line_continuation,
    STATE(277), 1,
      sym_array_element,
    STATE(283), 1,
      sym_json_string,
    ACTIONS(483), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2422] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    ACTIONS(485), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym_line_continuation,
    STATE(107), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(233), 1,
      sym_immediate_expansion,
    STATE(252), 1,
      sym_imm_expansion,
  [2447] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
    ACTIONS(489), 1,
      aux_sym_expose_port_token1,
    ACTIONS(491), 1,
      sym_semgrep_ellipsis,
    STATE(58), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(82), 1,
      sym_line_continuation,
    STATE(197), 2,
      sym_expansion,
      sym_expose_port,
  [2470] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      aux_sym_env_key_token1,
    ACTIONS(495), 1,
      sym_semgrep_ellipsis,
    STATE(83), 1,
      sym_line_continuation,
    STATE(113), 1,
      aux_sym_env_instruction_repeat1,
    STATE(257), 1,
      sym_env_pair,
    STATE(279), 1,
      sym_env_key,
    STATE(336), 1,
      sym_spaced_env_pair,
  [2495] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(81), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(84), 1,
      sym_line_continuation,
    STATE(233), 1,
      sym_immediate_expansion,
    STATE(252), 1,
      sym_imm_expansion,
  [2520] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(501), 1,
      anon_sym_DOLLAR2,
    ACTIONS(504), 1,
      aux_sym_image_alias_token2,
    STATE(210), 1,
      sym_immediate_expansion,
    STATE(236), 1,
      sym_imm_expansion,
    STATE(85), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2543] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    ACTIONS(507), 1,
      anon_sym_LF,
    STATE(79), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(86), 1,
      sym_line_continuation,
    STATE(233), 1,
      sym_immediate_expansion,
    STATE(252), 1,
      sym_imm_expansion,
  [2568] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      aux_sym_path_token2,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(87), 1,
      sym_line_continuation,
    STATE(97), 1,
      aux_sym_path_repeat1,
    STATE(261), 1,
      sym_imm_expansion,
    STATE(273), 1,
      sym_immediate_expansion,
  [2593] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      aux_sym_path_token2,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(88), 1,
      sym_line_continuation,
    STATE(261), 1,
      sym_imm_expansion,
    STATE(273), 1,
      sym_immediate_expansion,
  [2618] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      sym_non_newline_whitespace,
    ACTIONS(513), 1,
      aux_sym_path_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    STATE(89), 1,
      sym_line_continuation,
    STATE(110), 1,
      aux_sym_path_repeat1,
    STATE(240), 1,
      sym_immediate_expansion,
    STATE(249), 1,
      sym_imm_expansion,
  [2643] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(509), 1,
      sym_non_newline_whitespace,
    ACTIONS(513), 1,
      aux_sym_path_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    STATE(90), 1,
      sym_line_continuation,
    STATE(110), 1,
      aux_sym_path_repeat1,
    STATE(240), 1,
      sym_immediate_expansion,
    STATE(249), 1,
      sym_imm_expansion,
  [2668] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      aux_sym_env_key_token1,
    ACTIONS(522), 1,
      sym_semgrep_ellipsis,
    STATE(257), 1,
      sym_env_pair,
    STATE(362), 1,
      sym_env_key,
    STATE(91), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2691] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      aux_sym_path_token2,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    ACTIONS(525), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_path_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    STATE(261), 1,
      sym_imm_expansion,
    STATE(273), 1,
      sym_immediate_expansion,
  [2716] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(531), 1,
      anon_sym_COLON,
    ACTIONS(533), 1,
      anon_sym_AT,
    STATE(93), 1,
      sym_line_continuation,
    STATE(203), 1,
      sym_image_tag,
    STATE(284), 1,
      sym_image_digest,
  [2741] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(418), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(416), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2758] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(535), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2775] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(541), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(539), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2792] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_path_token2,
    ACTIONS(548), 1,
      anon_sym_DOLLAR2,
    STATE(261), 1,
      sym_imm_expansion,
    STATE(273), 1,
      sym_immediate_expansion,
    STATE(97), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2815] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2832] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(332), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2849] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(435), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2866] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      aux_sym_label_pair_token1,
    ACTIONS(555), 1,
      sym_semgrep_metavariable,
    ACTIONS(557), 1,
      sym_semgrep_ellipsis,
    STATE(101), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_label_instruction_repeat1,
    STATE(194), 1,
      sym_label_pair,
  [2891] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_DOLLAR2,
    ACTIONS(463), 1,
      aux_sym_image_alias_token2,
    ACTIONS(559), 1,
      anon_sym_LF,
    STATE(85), 1,
      aux_sym_image_alias_repeat1,
    STATE(102), 1,
      sym_line_continuation,
    STATE(210), 1,
      sym_immediate_expansion,
    STATE(236), 1,
      sym_imm_expansion,
  [2916] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(561), 1,
      anon_sym_LF,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(565), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(563), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [2935] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      aux_sym_label_pair_token1,
    ACTIONS(572), 1,
      sym_semgrep_metavariable,
    ACTIONS(575), 1,
      sym_semgrep_ellipsis,
    STATE(194), 1,
      sym_label_pair,
    STATE(104), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2958] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_DOLLAR2,
    ACTIONS(463), 1,
      aux_sym_image_alias_token2,
    ACTIONS(578), 1,
      anon_sym_LF,
    STATE(85), 1,
      aux_sym_image_alias_repeat1,
    STATE(105), 1,
      sym_line_continuation,
    STATE(210), 1,
      sym_immediate_expansion,
    STATE(236), 1,
      sym_imm_expansion,
  [2983] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(410), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(408), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3000] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(585), 1,
      anon_sym_DOLLAR2,
    STATE(233), 1,
      sym_immediate_expansion,
    STATE(252), 1,
      sym_imm_expansion,
    STATE(107), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [3023] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(511), 1,
      sym_non_newline_whitespace,
    ACTIONS(513), 1,
      aux_sym_path_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    STATE(89), 1,
      aux_sym_path_repeat1,
    STATE(108), 1,
      sym_line_continuation,
    STATE(240), 1,
      sym_immediate_expansion,
    STATE(249), 1,
      sym_imm_expansion,
  [3048] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(513), 1,
      aux_sym_path_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    ACTIONS(525), 1,
      sym_non_newline_whitespace,
    STATE(90), 1,
      aux_sym_path_repeat1,
    STATE(109), 1,
      sym_line_continuation,
    STATE(240), 1,
      sym_immediate_expansion,
    STATE(249), 1,
      sym_imm_expansion,
  [3073] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      sym_non_newline_whitespace,
    ACTIONS(588), 1,
      aux_sym_path_token2,
    ACTIONS(591), 1,
      anon_sym_DOLLAR2,
    STATE(240), 1,
      sym_immediate_expansion,
    STATE(249), 1,
      sym_imm_expansion,
    STATE(110), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [3096] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(416), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(418), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3113] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(408), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(410), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3130] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 1,
      aux_sym_env_key_token1,
    ACTIONS(598), 1,
      sym_semgrep_ellipsis,
    STATE(91), 1,
      aux_sym_env_instruction_repeat1,
    STATE(113), 1,
      sym_line_continuation,
    STATE(257), 1,
      sym_env_pair,
    STATE(362), 1,
      sym_env_key,
  [3155] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(394), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(396), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3172] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(326), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(328), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3189] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(398), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(400), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3206] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      aux_sym_path_token1,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(117), 1,
      sym_line_continuation,
    STATE(118), 1,
      aux_sym_add_instruction_repeat1,
    STATE(292), 1,
      sym_path,
  [3228] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(600), 1,
      aux_sym_path_token1,
    ACTIONS(603), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym_expansion,
    STATE(348), 1,
      sym_path,
    STATE(118), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [3248] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(606), 1,
      anon_sym_BSLASH,
    ACTIONS(608), 1,
      anon_sym_SQUOTE,
    ACTIONS(610), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(612), 1,
      sym_single_quoted_escape_sequence,
    STATE(119), 1,
      sym_line_continuation,
    STATE(137), 1,
      aux_sym_single_quoted_string_repeat1,
  [3270] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_line_continuation,
    STATE(283), 1,
      sym_json_string,
    STATE(286), 1,
      sym_array_element,
    ACTIONS(483), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3290] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(330), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3306] = 6,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(619), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(622), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(625), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [3326] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(410), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(408), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3342] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(606), 1,
      anon_sym_BSLASH,
    ACTIONS(610), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(612), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(627), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_line_continuation,
    STATE(143), 1,
      aux_sym_single_quoted_string_repeat1,
  [3364] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(435), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(433), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3380] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(320), 1,
      anon_sym_DOLLAR2,
    ACTIONS(322), 1,
      aux_sym_image_tag_token1,
    STATE(44), 1,
      aux_sym_image_tag_repeat1,
    STATE(126), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym_imm_expansion,
    STATE(148), 1,
      sym_immediate_expansion,
  [3402] = 7,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(633), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(127), 1,
      sym_line_continuation,
  [3424] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      aux_sym_path_token1,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym_expansion,
    STATE(117), 1,
      aux_sym_add_instruction_repeat1,
    STATE(128), 1,
      sym_line_continuation,
    STATE(348), 1,
      sym_path,
  [3446] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      aux_sym_image_name_token1,
    STATE(30), 1,
      sym_expansion,
    STATE(93), 1,
      sym_image_name,
    STATE(129), 1,
      sym_line_continuation,
    STATE(281), 1,
      sym_image_spec,
  [3468] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(410), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(408), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3484] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(418), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(416), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3500] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(637), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(635), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3516] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_DOLLAR2,
    ACTIONS(363), 1,
      aux_sym_image_digest_token1,
    STATE(54), 1,
      aux_sym_image_digest_repeat1,
    STATE(133), 1,
      sym_line_continuation,
    STATE(169), 1,
      sym_immediate_expansion,
    STATE(173), 1,
      sym_imm_expansion,
  [3538] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(641), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(639), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3554] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      aux_sym_path_token1,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(118), 1,
      aux_sym_add_instruction_repeat1,
    STATE(135), 1,
      sym_line_continuation,
    STATE(293), 1,
      sym_path,
  [3576] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(392), 1,
      anon_sym_DASH_DASH,
    STATE(136), 1,
      sym_line_continuation,
    STATE(157), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(288), 1,
      sym_param,
    STATE(330), 1,
      sym_cmd_instruction,
  [3598] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(606), 1,
      anon_sym_BSLASH,
    ACTIONS(610), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(612), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(643), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_single_quoted_string_repeat1,
  [3620] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(418), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(416), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3636] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(435), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3652] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      aux_sym_label_pair_token1,
    ACTIONS(557), 1,
      sym_semgrep_ellipsis,
    ACTIONS(645), 1,
      sym_semgrep_metavariable,
    STATE(101), 1,
      aux_sym_label_instruction_repeat1,
    STATE(140), 1,
      sym_line_continuation,
    STATE(194), 1,
      sym_label_pair,
  [3674] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(647), 1,
      anon_sym_BSLASH,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(655), 1,
      sym_single_quoted_escape_sequence,
    STATE(141), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [3694] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3710] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(606), 1,
      anon_sym_BSLASH,
    ACTIONS(610), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(612), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(143), 1,
      sym_line_continuation,
  [3732] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      aux_sym_path_token1,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(118), 1,
      aux_sym_add_instruction_repeat1,
    STATE(144), 1,
      sym_line_continuation,
    STATE(291), 1,
      sym_path,
  [3754] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      aux_sym_path_token1,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym_expansion,
    STATE(135), 1,
      aux_sym_add_instruction_repeat1,
    STATE(145), 1,
      sym_line_continuation,
    STATE(348), 1,
      sym_path,
  [3776] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      aux_sym_path_token1,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(118), 1,
      aux_sym_add_instruction_repeat1,
    STATE(146), 1,
      sym_line_continuation,
    STATE(303), 1,
      sym_path,
  [3798] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(662), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(660), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3814] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(666), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(664), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3830] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(535), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3843] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      aux_sym_json_string_token1,
    ACTIONS(673), 1,
      sym_json_escape_sequence,
    STATE(150), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [3860] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(678), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(151), 1,
      sym_line_continuation,
    STATE(300), 1,
      sym_user_name_or_group,
  [3879] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      aux_sym_path_token1,
    ACTIONS(682), 1,
      anon_sym_DOLLAR,
    STATE(88), 1,
      sym_expansion,
    STATE(152), 1,
      sym_line_continuation,
    STATE(318), 1,
      sym_path,
  [3898] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(686), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym_expansion,
    STATE(153), 1,
      sym_line_continuation,
    STATE(324), 1,
      sym_stopsignal_value,
  [3917] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(408), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3930] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      aux_sym_path_token1,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(155), 1,
      sym_line_continuation,
    STATE(294), 1,
      sym_path,
  [3949] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(416), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3962] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(690), 1,
      anon_sym_DASH_DASH,
    STATE(288), 1,
      sym_param,
    STATE(157), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [3979] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(433), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3992] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4005] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(693), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4018] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(410), 1,
      aux_sym_from_instruction_token2,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(408), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4033] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(695), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4046] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(697), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4059] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(418), 1,
      aux_sym_from_instruction_token2,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(416), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4074] = 3,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(701), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [4087] = 3,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(705), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [4100] = 3,
    ACTIONS(707), 1,
      anon_sym_LF,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(709), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [4113] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(713), 1,
      aux_sym_from_instruction_token2,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(711), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4128] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      aux_sym_from_instruction_token2,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(715), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4143] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_DOLLAR,
    ACTIONS(721), 1,
      aux_sym_image_alias_token1,
    STATE(75), 1,
      sym_expansion,
    STATE(170), 1,
      sym_line_continuation,
    STATE(319), 1,
      sym_image_alias,
  [4162] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_from_instruction_token2,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4177] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_DOLLAR,
    ACTIONS(721), 1,
      aux_sym_image_alias_token1,
    STATE(75), 1,
      sym_expansion,
    STATE(172), 1,
      sym_line_continuation,
    STATE(355), 1,
      sym_image_alias,
  [4196] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_from_instruction_token2,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4211] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(408), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4224] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(416), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4237] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(410), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4252] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      aux_sym_json_string_token1,
    ACTIONS(727), 1,
      sym_json_escape_sequence,
    STATE(150), 1,
      aux_sym_json_string_repeat1,
    STATE(177), 1,
      sym_line_continuation,
  [4271] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(731), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4286] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(433), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4299] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4312] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_DOLLAR2,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(537), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4327] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(416), 1,
      anon_sym_DOLLAR2,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(418), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4342] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(733), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4355] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(326), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4368] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(398), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4381] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(735), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4394] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(394), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4407] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(737), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4420] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR2,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(435), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4435] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(741), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4450] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR2,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(332), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4465] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(745), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4480] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(747), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(749), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4495] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(751), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(753), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4510] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      aux_sym_json_string_token1,
    ACTIONS(727), 1,
      sym_json_escape_sequence,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      aux_sym_json_string_repeat1,
    STATE(195), 1,
      sym_line_continuation,
  [4529] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(759), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4544] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(763), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4559] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(410), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4574] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(767), 1,
      anon_sym_DOLLAR2,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(765), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4589] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(771), 1,
      anon_sym_DOLLAR2,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(769), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4604] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(537), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4619] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(416), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
    ACTIONS(418), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4634] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      anon_sym_AT,
    ACTIONS(773), 1,
      anon_sym_LF,
    ACTIONS(775), 1,
      aux_sym_from_instruction_token2,
    STATE(203), 1,
      sym_line_continuation,
    STATE(302), 1,
      sym_image_digest,
  [4653] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_line_continuation,
    ACTIONS(779), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4668] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
    ACTIONS(783), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4683] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(785), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(787), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4698] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(789), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_line_continuation,
    ACTIONS(791), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4713] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(208), 1,
      sym_line_continuation,
    ACTIONS(795), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4728] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(797), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(799), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4743] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(801), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4755] = 5,
    ACTIONS(803), 1,
      anon_sym_LF,
    ACTIONS(805), 1,
      anon_sym_BSLASH_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(211), 1,
      sym_line_continuation,
    STATE(268), 1,
      aux_sym_shell_command_repeat2,
  [4771] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    ACTIONS(809), 1,
      sym_variable,
    STATE(125), 1,
      sym_expansion_body,
    STATE(212), 1,
      sym_line_continuation,
  [4787] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    ACTIONS(813), 1,
      sym_variable,
    STATE(213), 1,
      sym_line_continuation,
    STATE(235), 1,
      sym_expansion_body,
  [4803] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
    ACTIONS(817), 1,
      sym_variable,
    STATE(158), 1,
      sym_expansion_body,
    STATE(214), 1,
      sym_line_continuation,
  [4819] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    ACTIONS(821), 1,
      sym_variable,
    STATE(100), 1,
      sym_expansion_body,
    STATE(215), 1,
      sym_line_continuation,
  [4835] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(823), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4847] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(827), 1,
      sym_variable,
    STATE(69), 1,
      sym_expansion_body,
    STATE(217), 1,
      sym_line_continuation,
  [4863] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    ACTIONS(813), 1,
      sym_variable,
    STATE(218), 1,
      sym_line_continuation,
    STATE(242), 1,
      sym_expansion_body,
  [4879] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(829), 1,
      anon_sym_LBRACE,
    ACTIONS(831), 1,
      sym_variable,
    STATE(171), 1,
      sym_expansion_body,
    STATE(219), 1,
      sym_line_continuation,
  [4895] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(833), 1,
      anon_sym_LBRACE,
    ACTIONS(835), 1,
      sym_variable,
    STATE(220), 1,
      sym_line_continuation,
    STATE(246), 1,
      sym_expansion_body,
  [4911] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(837), 1,
      anon_sym_LBRACE,
    ACTIONS(839), 1,
      sym_variable,
    STATE(139), 1,
      sym_expansion_body,
    STATE(221), 1,
      sym_line_continuation,
  [4927] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    ACTIONS(843), 1,
      sym_variable,
    STATE(222), 1,
      sym_line_continuation,
    STATE(253), 1,
      sym_expansion_body,
  [4943] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(845), 1,
      anon_sym_LBRACE,
    ACTIONS(847), 1,
      sym_variable,
    STATE(78), 1,
      sym_expansion_body,
    STATE(223), 1,
      sym_line_continuation,
  [4959] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(833), 1,
      anon_sym_LBRACE,
    ACTIONS(835), 1,
      sym_variable,
    STATE(224), 1,
      sym_line_continuation,
    STATE(251), 1,
      sym_expansion_body,
  [4975] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    ACTIONS(851), 1,
      sym_variable,
    STATE(149), 1,
      sym_expansion_body,
    STATE(225), 1,
      sym_line_continuation,
  [4991] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    ACTIONS(843), 1,
      sym_variable,
    STATE(226), 1,
      sym_line_continuation,
    STATE(259), 1,
      sym_expansion_body,
  [5007] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(853), 1,
      anon_sym_COMMA2,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
    STATE(227), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [5021] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    ACTIONS(860), 1,
      sym_variable,
    STATE(181), 1,
      sym_expansion_body,
    STATE(228), 1,
      sym_line_continuation,
  [5037] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    ACTIONS(851), 1,
      sym_variable,
    STATE(179), 1,
      sym_expansion_body,
    STATE(229), 1,
      sym_line_continuation,
  [5053] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      sym_variable,
    STATE(230), 1,
      sym_line_continuation,
    STATE(270), 1,
      sym_expansion_body,
  [5069] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    ACTIONS(860), 1,
      sym_variable,
    STATE(189), 1,
      sym_expansion_body,
    STATE(231), 1,
      sym_line_continuation,
  [5085] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(866), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5097] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(233), 1,
      sym_line_continuation,
    ACTIONS(868), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5109] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(872), 1,
      sym_variable,
    STATE(201), 1,
      sym_expansion_body,
    STATE(234), 1,
      sym_line_continuation,
  [5125] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(235), 1,
      sym_line_continuation,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5137] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(236), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5149] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(845), 1,
      anon_sym_LBRACE,
    ACTIONS(847), 1,
      sym_variable,
    STATE(95), 1,
      sym_expansion_body,
    STATE(237), 1,
      sym_line_continuation,
  [5165] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(876), 1,
      sym_non_newline_whitespace,
    STATE(238), 1,
      sym_line_continuation,
    STATE(260), 1,
      aux_sym_volume_instruction_repeat1,
  [5181] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      aux_sym_path_token2,
    STATE(239), 1,
      sym_line_continuation,
    ACTIONS(771), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5195] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      aux_sym_path_token2,
    STATE(240), 1,
      sym_line_continuation,
    ACTIONS(767), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5209] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(241), 1,
      sym_line_continuation,
    ACTIONS(408), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5221] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(535), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5233] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(243), 1,
      sym_line_continuation,
    ACTIONS(416), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5245] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(244), 1,
      sym_line_continuation,
    ACTIONS(408), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5257] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(876), 1,
      sym_non_newline_whitespace,
    ACTIONS(878), 1,
      anon_sym_LF,
    STATE(238), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(245), 1,
      sym_line_continuation,
  [5273] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(246), 1,
      sym_line_continuation,
    ACTIONS(535), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5285] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(247), 1,
      sym_line_continuation,
    ACTIONS(416), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5297] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      sym_variable,
    STATE(248), 1,
      sym_line_continuation,
    STATE(254), 1,
      sym_expansion_body,
  [5313] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_path_token2,
    STATE(249), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5327] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(410), 1,
      aux_sym_path_token2,
    STATE(250), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5341] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(251), 1,
      sym_line_continuation,
    ACTIONS(433), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5353] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(252), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5365] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(537), 1,
      aux_sym_path_token2,
    STATE(253), 1,
      sym_line_continuation,
    ACTIONS(535), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5379] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_path_token2,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(433), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5393] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(418), 1,
      aux_sym_path_token2,
    STATE(255), 1,
      sym_line_continuation,
    ACTIONS(416), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5407] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(880), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_line_continuation,
    ACTIONS(882), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [5421] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      anon_sym_LF,
    STATE(257), 1,
      sym_line_continuation,
    ACTIONS(886), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5435] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      anon_sym_LF,
    STATE(258), 1,
      sym_line_continuation,
    ACTIONS(890), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5449] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_path_token2,
    STATE(259), 1,
      sym_line_continuation,
    ACTIONS(433), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5463] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(892), 1,
      anon_sym_LF,
    ACTIONS(894), 1,
      sym_non_newline_whitespace,
    STATE(260), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [5477] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_path_token2,
    STATE(261), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5491] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(262), 1,
      sym_line_continuation,
    ACTIONS(795), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5505] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(789), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_line_continuation,
    ACTIONS(791), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5519] = 5,
    ACTIONS(805), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(264), 1,
      sym_line_continuation,
    STATE(278), 1,
      aux_sym_shell_command_repeat2,
  [5535] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      anon_sym_LF,
    STATE(265), 1,
      sym_line_continuation,
    ACTIONS(779), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5549] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      anon_sym_LF,
    STATE(266), 1,
      sym_line_continuation,
    ACTIONS(783), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5563] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(899), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      sym_line_continuation,
    ACTIONS(901), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [5577] = 4,
    ACTIONS(903), 1,
      anon_sym_LF,
    ACTIONS(905), 1,
      anon_sym_BSLASH_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(268), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [5591] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(418), 1,
      aux_sym_path_token2,
    STATE(269), 1,
      sym_line_continuation,
    ACTIONS(416), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5605] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(537), 1,
      aux_sym_path_token2,
    STATE(270), 1,
      sym_line_continuation,
    ACTIONS(535), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5619] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(908), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
    ACTIONS(910), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5633] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      aux_sym_path_token2,
    STATE(272), 1,
      sym_line_continuation,
    ACTIONS(771), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5647] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      aux_sym_path_token2,
    STATE(273), 1,
      sym_line_continuation,
    ACTIONS(767), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5661] = 5,
    ACTIONS(805), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(912), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(211), 1,
      aux_sym_shell_command_repeat2,
    STATE(274), 1,
      sym_line_continuation,
  [5677] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(410), 1,
      aux_sym_path_token2,
    STATE(275), 1,
      sym_line_continuation,
    ACTIONS(408), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5691] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      anon_sym_COMMA2,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_json_string_array_repeat1,
    STATE(276), 1,
      sym_line_continuation,
  [5707] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      anon_sym_COMMA2,
    ACTIONS(918), 1,
      anon_sym_RBRACK,
    STATE(276), 1,
      aux_sym_json_string_array_repeat1,
    STATE(277), 1,
      sym_line_continuation,
  [5723] = 5,
    ACTIONS(805), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(912), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(268), 1,
      aux_sym_shell_command_repeat2,
    STATE(278), 1,
      sym_line_continuation,
  [5739] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      anon_sym_EQ,
    ACTIONS(922), 1,
      aux_sym_spaced_env_pair_token1,
    STATE(279), 1,
      sym_line_continuation,
  [5752] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(924), 1,
      aux_sym_param_token1,
    ACTIONS(926), 1,
      anon_sym_mount,
    STATE(280), 1,
      sym_line_continuation,
  [5765] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(928), 1,
      anon_sym_LF,
    ACTIONS(930), 1,
      aux_sym_from_instruction_token2,
    STATE(281), 1,
      sym_line_continuation,
  [5778] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    ACTIONS(372), 1,
      aux_sym_image_name_token1,
    STATE(282), 1,
      sym_line_continuation,
  [5791] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(283), 1,
      sym_line_continuation,
    ACTIONS(932), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5802] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(934), 1,
      anon_sym_LF,
    ACTIONS(936), 1,
      aux_sym_from_instruction_token2,
    STATE(284), 1,
      sym_line_continuation,
  [5815] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(285), 1,
      sym_line_continuation,
    ACTIONS(938), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5826] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(286), 1,
      sym_line_continuation,
    ACTIONS(856), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5837] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    ACTIONS(372), 1,
      aux_sym_path_token1,
    STATE(287), 1,
      sym_line_continuation,
  [5850] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(288), 1,
      sym_line_continuation,
    ACTIONS(940), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5861] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(942), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(944), 1,
      sym_semgrep_metavariable,
    STATE(289), 1,
      sym_line_continuation,
  [5874] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(290), 1,
      sym_line_continuation,
    ACTIONS(370), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5885] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(946), 1,
      anon_sym_LF,
    ACTIONS(948), 1,
      sym_non_newline_whitespace,
    STATE(291), 1,
      sym_line_continuation,
  [5898] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      sym_non_newline_whitespace,
    ACTIONS(950), 1,
      anon_sym_LF,
    STATE(292), 1,
      sym_line_continuation,
  [5911] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      sym_non_newline_whitespace,
    ACTIONS(952), 1,
      anon_sym_LF,
    STATE(293), 1,
      sym_line_continuation,
  [5924] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(294), 1,
      sym_line_continuation,
    ACTIONS(892), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [5935] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(295), 1,
      sym_line_continuation,
    ACTIONS(954), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [5946] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    STATE(296), 1,
      sym_line_continuation,
    STATE(340), 1,
      sym_json_string_array,
  [5959] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(956), 1,
      aux_sym_mount_param_param_token1,
    STATE(39), 1,
      sym_mount_param_param,
    STATE(297), 1,
      sym_line_continuation,
  [5972] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(298), 1,
      sym_line_continuation,
    ACTIONS(958), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5983] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(956), 1,
      aux_sym_mount_param_param_token1,
    STATE(31), 1,
      sym_mount_param_param,
    STATE(299), 1,
      sym_line_continuation,
  [5996] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(960), 1,
      anon_sym_LF,
    ACTIONS(962), 1,
      anon_sym_COLON,
    STATE(300), 1,
      sym_line_continuation,
  [6009] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(964), 1,
      anon_sym_LF,
    ACTIONS(966), 1,
      aux_sym_from_instruction_token2,
    STATE(301), 1,
      sym_line_continuation,
  [6022] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(968), 1,
      anon_sym_LF,
    ACTIONS(970), 1,
      aux_sym_from_instruction_token2,
    STATE(302), 1,
      sym_line_continuation,
  [6035] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      sym_non_newline_whitespace,
    ACTIONS(972), 1,
      anon_sym_LF,
    STATE(303), 1,
      sym_line_continuation,
  [6048] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(974), 1,
      anon_sym_LF,
    ACTIONS(976), 1,
      anon_sym_EQ,
    STATE(304), 1,
      sym_line_continuation,
  [6061] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(978), 1,
      aux_sym_path_token1,
    ACTIONS(980), 1,
      anon_sym_DOLLAR,
    STATE(305), 1,
      sym_line_continuation,
  [6074] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(982), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      anon_sym_EQ,
    STATE(306), 1,
      sym_line_continuation,
  [6087] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(986), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_line_continuation,
  [6097] = 3,
    ACTIONS(988), 1,
      anon_sym_LF,
    ACTIONS(990), 1,
      anon_sym_BSLASH_LF,
    STATE(308), 1,
      sym_line_continuation,
  [6107] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(992), 1,
      anon_sym_LF,
    STATE(309), 1,
      sym_line_continuation,
  [6117] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(994), 1,
      anon_sym_LF,
    STATE(310), 1,
      sym_line_continuation,
  [6127] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(996), 1,
      anon_sym_LF,
    STATE(311), 1,
      sym_line_continuation,
  [6137] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(998), 1,
      anon_sym_LF,
    STATE(312), 1,
      sym_line_continuation,
  [6147] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1000), 1,
      anon_sym_LF,
    STATE(313), 1,
      sym_line_continuation,
  [6157] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      anon_sym_LF,
    STATE(314), 1,
      sym_line_continuation,
  [6167] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1002), 1,
      anon_sym_LF,
    STATE(315), 1,
      sym_line_continuation,
  [6177] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(954), 1,
      anon_sym_EQ,
    STATE(316), 1,
      sym_line_continuation,
  [6187] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1004), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(317), 1,
      sym_line_continuation,
  [6197] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1006), 1,
      anon_sym_LF,
    STATE(318), 1,
      sym_line_continuation,
  [6207] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1008), 1,
      anon_sym_LF,
    STATE(319), 1,
      sym_line_continuation,
  [6217] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1010), 1,
      aux_sym_param_token1,
    STATE(320), 1,
      sym_line_continuation,
  [6227] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1012), 1,
      aux_sym_param_token2,
    STATE(321), 1,
      sym_line_continuation,
  [6237] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1014), 1,
      anon_sym_LF,
    STATE(322), 1,
      sym_line_continuation,
  [6247] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1016), 1,
      ts_builtin_sym_end,
    STATE(323), 1,
      sym_line_continuation,
  [6257] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1018), 1,
      anon_sym_LF,
    STATE(324), 1,
      sym_line_continuation,
  [6267] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    STATE(325), 1,
      sym_line_continuation,
  [6277] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1022), 1,
      anon_sym_LF,
    STATE(326), 1,
      sym_line_continuation,
  [6287] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      sym_line_continuation,
  [6297] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1026), 1,
      anon_sym_LF,
    STATE(328), 1,
      sym_line_continuation,
  [6307] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1028), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(329), 1,
      sym_line_continuation,
  [6317] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1030), 1,
      anon_sym_LF,
    STATE(330), 1,
      sym_line_continuation,
  [6327] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1032), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(331), 1,
      sym_line_continuation,
  [6337] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1034), 1,
      anon_sym_LF,
    STATE(332), 1,
      sym_line_continuation,
  [6347] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1036), 1,
      aux_sym_mount_param_param_token1,
    STATE(333), 1,
      sym_line_continuation,
  [6357] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1038), 1,
      anon_sym_LF,
    STATE(334), 1,
      sym_line_continuation,
  [6367] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1040), 1,
      aux_sym_param_token2,
    STATE(335), 1,
      sym_line_continuation,
  [6377] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(594), 1,
      anon_sym_LF,
    STATE(336), 1,
      sym_line_continuation,
  [6387] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1042), 1,
      anon_sym_LF,
    STATE(337), 1,
      sym_line_continuation,
  [6397] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1044), 1,
      anon_sym_LF,
    STATE(338), 1,
      sym_line_continuation,
  [6407] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1046), 1,
      anon_sym_LF,
    STATE(339), 1,
      sym_line_continuation,
  [6417] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1048), 1,
      anon_sym_LF,
    STATE(340), 1,
      sym_line_continuation,
  [6427] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1050), 1,
      anon_sym_LF,
    STATE(341), 1,
      sym_line_continuation,
  [6437] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      sym_line_continuation,
  [6447] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1054), 1,
      aux_sym_param_token2,
    STATE(343), 1,
      sym_line_continuation,
  [6457] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1056), 1,
      anon_sym_LF,
    STATE(344), 1,
      sym_line_continuation,
  [6467] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1058), 1,
      aux_sym_expansion_body_token1,
    STATE(345), 1,
      sym_line_continuation,
  [6477] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      sym_line_continuation,
  [6487] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1062), 1,
      aux_sym_param_token2,
    STATE(347), 1,
      sym_line_continuation,
  [6497] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1064), 1,
      sym_non_newline_whitespace,
    STATE(348), 1,
      sym_line_continuation,
  [6507] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1066), 1,
      anon_sym_LF,
    STATE(349), 1,
      sym_line_continuation,
  [6517] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1068), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      sym_line_continuation,
  [6527] = 3,
    ACTIONS(903), 1,
      anon_sym_LF,
    ACTIONS(1070), 1,
      anon_sym_BSLASH_LF,
    STATE(351), 1,
      sym_line_continuation,
  [6537] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1072), 1,
      anon_sym_LF,
    STATE(352), 1,
      sym_line_continuation,
  [6547] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      sym_line_continuation,
  [6557] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1076), 1,
      anon_sym_EQ,
    STATE(354), 1,
      sym_line_continuation,
  [6567] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1078), 1,
      anon_sym_LF,
    STATE(355), 1,
      sym_line_continuation,
  [6577] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1080), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      sym_line_continuation,
  [6587] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1082), 1,
      anon_sym_EQ,
    STATE(357), 1,
      sym_line_continuation,
  [6597] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1084), 1,
      aux_sym_param_token1,
    STATE(358), 1,
      sym_line_continuation,
  [6607] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      sym_line_continuation,
  [6617] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1088), 1,
      anon_sym_LF,
    STATE(360), 1,
      sym_line_continuation,
  [6627] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      sym_line_continuation,
  [6637] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(362), 1,
      sym_line_continuation,
  [6647] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1092), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      sym_line_continuation,
  [6657] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1094), 1,
      anon_sym_LF,
    STATE(364), 1,
      sym_line_continuation,
  [6667] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1096), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      sym_line_continuation,
  [6677] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1098), 1,
      anon_sym_EQ,
    STATE(366), 1,
      sym_line_continuation,
  [6687] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      sym_line_continuation,
  [6697] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1102), 1,
      anon_sym_EQ,
    STATE(368), 1,
      sym_line_continuation,
  [6707] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1104), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_line_continuation,
  [6717] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      sym_line_continuation,
  [6727] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1108), 1,
      aux_sym_expansion_body_token1,
    STATE(371), 1,
      sym_line_continuation,
  [6737] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1110), 1,
      anon_sym_EQ,
    STATE(372), 1,
      sym_line_continuation,
  [6747] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1112), 1,
      aux_sym_expansion_body_token1,
    STATE(373), 1,
      sym_line_continuation,
  [6757] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1114), 1,
      anon_sym_EQ,
    STATE(374), 1,
      sym_line_continuation,
  [6767] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1116), 1,
      aux_sym_expansion_body_token1,
    STATE(375), 1,
      sym_line_continuation,
  [6777] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1118), 1,
      anon_sym_EQ,
    STATE(376), 1,
      sym_line_continuation,
  [6787] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1120), 1,
      aux_sym_expansion_body_token1,
    STATE(377), 1,
      sym_line_continuation,
  [6797] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1122), 1,
      aux_sym_expansion_body_token1,
    STATE(378), 1,
      sym_line_continuation,
  [6807] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1124), 1,
      aux_sym_expansion_body_token1,
    STATE(379), 1,
      sym_line_continuation,
  [6817] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1126), 1,
      aux_sym_expansion_body_token1,
    STATE(380), 1,
      sym_line_continuation,
  [6827] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1128), 1,
      aux_sym_expansion_body_token1,
    STATE(381), 1,
      sym_line_continuation,
  [6837] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1130), 1,
      aux_sym_expansion_body_token1,
    STATE(382), 1,
      sym_line_continuation,
  [6847] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1132), 1,
      aux_sym_expansion_body_token1,
    STATE(383), 1,
      sym_line_continuation,
  [6857] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1134), 1,
      aux_sym_expansion_body_token1,
    STATE(384), 1,
      sym_line_continuation,
  [6867] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1136), 1,
      aux_sym_expansion_body_token1,
    STATE(385), 1,
      sym_line_continuation,
  [6877] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1138), 1,
      aux_sym_expansion_body_token1,
    STATE(386), 1,
      sym_line_continuation,
  [6887] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1140), 1,
      aux_sym_param_token1,
    STATE(387), 1,
      sym_line_continuation,
  [6897] = 1,
    ACTIONS(1142), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 378,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 475,
  [SMALL_STATE(10)] = 519,
  [SMALL_STATE(11)] = 563,
  [SMALL_STATE(12)] = 599,
  [SMALL_STATE(13)] = 635,
  [SMALL_STATE(14)] = 671,
  [SMALL_STATE(15)] = 707,
  [SMALL_STATE(16)] = 743,
  [SMALL_STATE(17)] = 776,
  [SMALL_STATE(18)] = 807,
  [SMALL_STATE(19)] = 832,
  [SMALL_STATE(20)] = 866,
  [SMALL_STATE(21)] = 896,
  [SMALL_STATE(22)] = 930,
  [SMALL_STATE(23)] = 962,
  [SMALL_STATE(24)] = 996,
  [SMALL_STATE(25)] = 1018,
  [SMALL_STATE(26)] = 1048,
  [SMALL_STATE(27)] = 1076,
  [SMALL_STATE(28)] = 1100,
  [SMALL_STATE(29)] = 1130,
  [SMALL_STATE(30)] = 1160,
  [SMALL_STATE(31)] = 1190,
  [SMALL_STATE(32)] = 1214,
  [SMALL_STATE(33)] = 1245,
  [SMALL_STATE(34)] = 1276,
  [SMALL_STATE(35)] = 1307,
  [SMALL_STATE(36)] = 1338,
  [SMALL_STATE(37)] = 1367,
  [SMALL_STATE(38)] = 1386,
  [SMALL_STATE(39)] = 1415,
  [SMALL_STATE(40)] = 1434,
  [SMALL_STATE(41)] = 1463,
  [SMALL_STATE(42)] = 1492,
  [SMALL_STATE(43)] = 1519,
  [SMALL_STATE(44)] = 1546,
  [SMALL_STATE(45)] = 1575,
  [SMALL_STATE(46)] = 1604,
  [SMALL_STATE(47)] = 1622,
  [SMALL_STATE(48)] = 1640,
  [SMALL_STATE(49)] = 1668,
  [SMALL_STATE(50)] = 1696,
  [SMALL_STATE(51)] = 1724,
  [SMALL_STATE(52)] = 1752,
  [SMALL_STATE(53)] = 1780,
  [SMALL_STATE(54)] = 1804,
  [SMALL_STATE(55)] = 1832,
  [SMALL_STATE(56)] = 1854,
  [SMALL_STATE(57)] = 1872,
  [SMALL_STATE(58)] = 1896,
  [SMALL_STATE(59)] = 1922,
  [SMALL_STATE(60)] = 1948,
  [SMALL_STATE(61)] = 1966,
  [SMALL_STATE(62)] = 1984,
  [SMALL_STATE(63)] = 2010,
  [SMALL_STATE(64)] = 2028,
  [SMALL_STATE(65)] = 2056,
  [SMALL_STATE(66)] = 2082,
  [SMALL_STATE(67)] = 2100,
  [SMALL_STATE(68)] = 2126,
  [SMALL_STATE(69)] = 2144,
  [SMALL_STATE(70)] = 2162,
  [SMALL_STATE(71)] = 2188,
  [SMALL_STATE(72)] = 2214,
  [SMALL_STATE(73)] = 2240,
  [SMALL_STATE(74)] = 2257,
  [SMALL_STATE(75)] = 2282,
  [SMALL_STATE(76)] = 2307,
  [SMALL_STATE(77)] = 2332,
  [SMALL_STATE(78)] = 2357,
  [SMALL_STATE(79)] = 2374,
  [SMALL_STATE(80)] = 2399,
  [SMALL_STATE(81)] = 2422,
  [SMALL_STATE(82)] = 2447,
  [SMALL_STATE(83)] = 2470,
  [SMALL_STATE(84)] = 2495,
  [SMALL_STATE(85)] = 2520,
  [SMALL_STATE(86)] = 2543,
  [SMALL_STATE(87)] = 2568,
  [SMALL_STATE(88)] = 2593,
  [SMALL_STATE(89)] = 2618,
  [SMALL_STATE(90)] = 2643,
  [SMALL_STATE(91)] = 2668,
  [SMALL_STATE(92)] = 2691,
  [SMALL_STATE(93)] = 2716,
  [SMALL_STATE(94)] = 2741,
  [SMALL_STATE(95)] = 2758,
  [SMALL_STATE(96)] = 2775,
  [SMALL_STATE(97)] = 2792,
  [SMALL_STATE(98)] = 2815,
  [SMALL_STATE(99)] = 2832,
  [SMALL_STATE(100)] = 2849,
  [SMALL_STATE(101)] = 2866,
  [SMALL_STATE(102)] = 2891,
  [SMALL_STATE(103)] = 2916,
  [SMALL_STATE(104)] = 2935,
  [SMALL_STATE(105)] = 2958,
  [SMALL_STATE(106)] = 2983,
  [SMALL_STATE(107)] = 3000,
  [SMALL_STATE(108)] = 3023,
  [SMALL_STATE(109)] = 3048,
  [SMALL_STATE(110)] = 3073,
  [SMALL_STATE(111)] = 3096,
  [SMALL_STATE(112)] = 3113,
  [SMALL_STATE(113)] = 3130,
  [SMALL_STATE(114)] = 3155,
  [SMALL_STATE(115)] = 3172,
  [SMALL_STATE(116)] = 3189,
  [SMALL_STATE(117)] = 3206,
  [SMALL_STATE(118)] = 3228,
  [SMALL_STATE(119)] = 3248,
  [SMALL_STATE(120)] = 3270,
  [SMALL_STATE(121)] = 3290,
  [SMALL_STATE(122)] = 3306,
  [SMALL_STATE(123)] = 3326,
  [SMALL_STATE(124)] = 3342,
  [SMALL_STATE(125)] = 3364,
  [SMALL_STATE(126)] = 3380,
  [SMALL_STATE(127)] = 3402,
  [SMALL_STATE(128)] = 3424,
  [SMALL_STATE(129)] = 3446,
  [SMALL_STATE(130)] = 3468,
  [SMALL_STATE(131)] = 3484,
  [SMALL_STATE(132)] = 3500,
  [SMALL_STATE(133)] = 3516,
  [SMALL_STATE(134)] = 3538,
  [SMALL_STATE(135)] = 3554,
  [SMALL_STATE(136)] = 3576,
  [SMALL_STATE(137)] = 3598,
  [SMALL_STATE(138)] = 3620,
  [SMALL_STATE(139)] = 3636,
  [SMALL_STATE(140)] = 3652,
  [SMALL_STATE(141)] = 3674,
  [SMALL_STATE(142)] = 3694,
  [SMALL_STATE(143)] = 3710,
  [SMALL_STATE(144)] = 3732,
  [SMALL_STATE(145)] = 3754,
  [SMALL_STATE(146)] = 3776,
  [SMALL_STATE(147)] = 3798,
  [SMALL_STATE(148)] = 3814,
  [SMALL_STATE(149)] = 3830,
  [SMALL_STATE(150)] = 3843,
  [SMALL_STATE(151)] = 3860,
  [SMALL_STATE(152)] = 3879,
  [SMALL_STATE(153)] = 3898,
  [SMALL_STATE(154)] = 3917,
  [SMALL_STATE(155)] = 3930,
  [SMALL_STATE(156)] = 3949,
  [SMALL_STATE(157)] = 3962,
  [SMALL_STATE(158)] = 3979,
  [SMALL_STATE(159)] = 3992,
  [SMALL_STATE(160)] = 4005,
  [SMALL_STATE(161)] = 4018,
  [SMALL_STATE(162)] = 4033,
  [SMALL_STATE(163)] = 4046,
  [SMALL_STATE(164)] = 4059,
  [SMALL_STATE(165)] = 4074,
  [SMALL_STATE(166)] = 4087,
  [SMALL_STATE(167)] = 4100,
  [SMALL_STATE(168)] = 4113,
  [SMALL_STATE(169)] = 4128,
  [SMALL_STATE(170)] = 4143,
  [SMALL_STATE(171)] = 4162,
  [SMALL_STATE(172)] = 4177,
  [SMALL_STATE(173)] = 4196,
  [SMALL_STATE(174)] = 4211,
  [SMALL_STATE(175)] = 4224,
  [SMALL_STATE(176)] = 4237,
  [SMALL_STATE(177)] = 4252,
  [SMALL_STATE(178)] = 4271,
  [SMALL_STATE(179)] = 4286,
  [SMALL_STATE(180)] = 4299,
  [SMALL_STATE(181)] = 4312,
  [SMALL_STATE(182)] = 4327,
  [SMALL_STATE(183)] = 4342,
  [SMALL_STATE(184)] = 4355,
  [SMALL_STATE(185)] = 4368,
  [SMALL_STATE(186)] = 4381,
  [SMALL_STATE(187)] = 4394,
  [SMALL_STATE(188)] = 4407,
  [SMALL_STATE(189)] = 4420,
  [SMALL_STATE(190)] = 4435,
  [SMALL_STATE(191)] = 4450,
  [SMALL_STATE(192)] = 4465,
  [SMALL_STATE(193)] = 4480,
  [SMALL_STATE(194)] = 4495,
  [SMALL_STATE(195)] = 4510,
  [SMALL_STATE(196)] = 4529,
  [SMALL_STATE(197)] = 4544,
  [SMALL_STATE(198)] = 4559,
  [SMALL_STATE(199)] = 4574,
  [SMALL_STATE(200)] = 4589,
  [SMALL_STATE(201)] = 4604,
  [SMALL_STATE(202)] = 4619,
  [SMALL_STATE(203)] = 4634,
  [SMALL_STATE(204)] = 4653,
  [SMALL_STATE(205)] = 4668,
  [SMALL_STATE(206)] = 4683,
  [SMALL_STATE(207)] = 4698,
  [SMALL_STATE(208)] = 4713,
  [SMALL_STATE(209)] = 4728,
  [SMALL_STATE(210)] = 4743,
  [SMALL_STATE(211)] = 4755,
  [SMALL_STATE(212)] = 4771,
  [SMALL_STATE(213)] = 4787,
  [SMALL_STATE(214)] = 4803,
  [SMALL_STATE(215)] = 4819,
  [SMALL_STATE(216)] = 4835,
  [SMALL_STATE(217)] = 4847,
  [SMALL_STATE(218)] = 4863,
  [SMALL_STATE(219)] = 4879,
  [SMALL_STATE(220)] = 4895,
  [SMALL_STATE(221)] = 4911,
  [SMALL_STATE(222)] = 4927,
  [SMALL_STATE(223)] = 4943,
  [SMALL_STATE(224)] = 4959,
  [SMALL_STATE(225)] = 4975,
  [SMALL_STATE(226)] = 4991,
  [SMALL_STATE(227)] = 5007,
  [SMALL_STATE(228)] = 5021,
  [SMALL_STATE(229)] = 5037,
  [SMALL_STATE(230)] = 5053,
  [SMALL_STATE(231)] = 5069,
  [SMALL_STATE(232)] = 5085,
  [SMALL_STATE(233)] = 5097,
  [SMALL_STATE(234)] = 5109,
  [SMALL_STATE(235)] = 5125,
  [SMALL_STATE(236)] = 5137,
  [SMALL_STATE(237)] = 5149,
  [SMALL_STATE(238)] = 5165,
  [SMALL_STATE(239)] = 5181,
  [SMALL_STATE(240)] = 5195,
  [SMALL_STATE(241)] = 5209,
  [SMALL_STATE(242)] = 5221,
  [SMALL_STATE(243)] = 5233,
  [SMALL_STATE(244)] = 5245,
  [SMALL_STATE(245)] = 5257,
  [SMALL_STATE(246)] = 5273,
  [SMALL_STATE(247)] = 5285,
  [SMALL_STATE(248)] = 5297,
  [SMALL_STATE(249)] = 5313,
  [SMALL_STATE(250)] = 5327,
  [SMALL_STATE(251)] = 5341,
  [SMALL_STATE(252)] = 5353,
  [SMALL_STATE(253)] = 5365,
  [SMALL_STATE(254)] = 5379,
  [SMALL_STATE(255)] = 5393,
  [SMALL_STATE(256)] = 5407,
  [SMALL_STATE(257)] = 5421,
  [SMALL_STATE(258)] = 5435,
  [SMALL_STATE(259)] = 5449,
  [SMALL_STATE(260)] = 5463,
  [SMALL_STATE(261)] = 5477,
  [SMALL_STATE(262)] = 5491,
  [SMALL_STATE(263)] = 5505,
  [SMALL_STATE(264)] = 5519,
  [SMALL_STATE(265)] = 5535,
  [SMALL_STATE(266)] = 5549,
  [SMALL_STATE(267)] = 5563,
  [SMALL_STATE(268)] = 5577,
  [SMALL_STATE(269)] = 5591,
  [SMALL_STATE(270)] = 5605,
  [SMALL_STATE(271)] = 5619,
  [SMALL_STATE(272)] = 5633,
  [SMALL_STATE(273)] = 5647,
  [SMALL_STATE(274)] = 5661,
  [SMALL_STATE(275)] = 5677,
  [SMALL_STATE(276)] = 5691,
  [SMALL_STATE(277)] = 5707,
  [SMALL_STATE(278)] = 5723,
  [SMALL_STATE(279)] = 5739,
  [SMALL_STATE(280)] = 5752,
  [SMALL_STATE(281)] = 5765,
  [SMALL_STATE(282)] = 5778,
  [SMALL_STATE(283)] = 5791,
  [SMALL_STATE(284)] = 5802,
  [SMALL_STATE(285)] = 5815,
  [SMALL_STATE(286)] = 5826,
  [SMALL_STATE(287)] = 5837,
  [SMALL_STATE(288)] = 5850,
  [SMALL_STATE(289)] = 5861,
  [SMALL_STATE(290)] = 5874,
  [SMALL_STATE(291)] = 5885,
  [SMALL_STATE(292)] = 5898,
  [SMALL_STATE(293)] = 5911,
  [SMALL_STATE(294)] = 5924,
  [SMALL_STATE(295)] = 5935,
  [SMALL_STATE(296)] = 5946,
  [SMALL_STATE(297)] = 5959,
  [SMALL_STATE(298)] = 5972,
  [SMALL_STATE(299)] = 5983,
  [SMALL_STATE(300)] = 5996,
  [SMALL_STATE(301)] = 6009,
  [SMALL_STATE(302)] = 6022,
  [SMALL_STATE(303)] = 6035,
  [SMALL_STATE(304)] = 6048,
  [SMALL_STATE(305)] = 6061,
  [SMALL_STATE(306)] = 6074,
  [SMALL_STATE(307)] = 6087,
  [SMALL_STATE(308)] = 6097,
  [SMALL_STATE(309)] = 6107,
  [SMALL_STATE(310)] = 6117,
  [SMALL_STATE(311)] = 6127,
  [SMALL_STATE(312)] = 6137,
  [SMALL_STATE(313)] = 6147,
  [SMALL_STATE(314)] = 6157,
  [SMALL_STATE(315)] = 6167,
  [SMALL_STATE(316)] = 6177,
  [SMALL_STATE(317)] = 6187,
  [SMALL_STATE(318)] = 6197,
  [SMALL_STATE(319)] = 6207,
  [SMALL_STATE(320)] = 6217,
  [SMALL_STATE(321)] = 6227,
  [SMALL_STATE(322)] = 6237,
  [SMALL_STATE(323)] = 6247,
  [SMALL_STATE(324)] = 6257,
  [SMALL_STATE(325)] = 6267,
  [SMALL_STATE(326)] = 6277,
  [SMALL_STATE(327)] = 6287,
  [SMALL_STATE(328)] = 6297,
  [SMALL_STATE(329)] = 6307,
  [SMALL_STATE(330)] = 6317,
  [SMALL_STATE(331)] = 6327,
  [SMALL_STATE(332)] = 6337,
  [SMALL_STATE(333)] = 6347,
  [SMALL_STATE(334)] = 6357,
  [SMALL_STATE(335)] = 6367,
  [SMALL_STATE(336)] = 6377,
  [SMALL_STATE(337)] = 6387,
  [SMALL_STATE(338)] = 6397,
  [SMALL_STATE(339)] = 6407,
  [SMALL_STATE(340)] = 6417,
  [SMALL_STATE(341)] = 6427,
  [SMALL_STATE(342)] = 6437,
  [SMALL_STATE(343)] = 6447,
  [SMALL_STATE(344)] = 6457,
  [SMALL_STATE(345)] = 6467,
  [SMALL_STATE(346)] = 6477,
  [SMALL_STATE(347)] = 6487,
  [SMALL_STATE(348)] = 6497,
  [SMALL_STATE(349)] = 6507,
  [SMALL_STATE(350)] = 6517,
  [SMALL_STATE(351)] = 6527,
  [SMALL_STATE(352)] = 6537,
  [SMALL_STATE(353)] = 6547,
  [SMALL_STATE(354)] = 6557,
  [SMALL_STATE(355)] = 6567,
  [SMALL_STATE(356)] = 6577,
  [SMALL_STATE(357)] = 6587,
  [SMALL_STATE(358)] = 6597,
  [SMALL_STATE(359)] = 6607,
  [SMALL_STATE(360)] = 6617,
  [SMALL_STATE(361)] = 6627,
  [SMALL_STATE(362)] = 6637,
  [SMALL_STATE(363)] = 6647,
  [SMALL_STATE(364)] = 6657,
  [SMALL_STATE(365)] = 6667,
  [SMALL_STATE(366)] = 6677,
  [SMALL_STATE(367)] = 6687,
  [SMALL_STATE(368)] = 6697,
  [SMALL_STATE(369)] = 6707,
  [SMALL_STATE(370)] = 6717,
  [SMALL_STATE(371)] = 6727,
  [SMALL_STATE(372)] = 6737,
  [SMALL_STATE(373)] = 6747,
  [SMALL_STATE(374)] = 6757,
  [SMALL_STATE(375)] = 6767,
  [SMALL_STATE(376)] = 6777,
  [SMALL_STATE(377)] = 6787,
  [SMALL_STATE(378)] = 6797,
  [SMALL_STATE(379)] = 6807,
  [SMALL_STATE(380)] = 6817,
  [SMALL_STATE(381)] = 6827,
  [SMALL_STATE(382)] = 6837,
  [SMALL_STATE(383)] = 6847,
  [SMALL_STATE(384)] = 6857,
  [SMALL_STATE(385)] = 6867,
  [SMALL_STATE(386)] = 6877,
  [SMALL_STATE(387)] = 6887,
  [SMALL_STATE(388)] = 6897,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(328),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 33),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 33),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(217),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(61),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(280),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(215),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(114),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(116),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(297),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(223),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(96),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 64),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 64),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 61),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 61),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(212),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(132),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(134),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(134),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, .production_id = 65),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, .production_id = 65),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 66),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 66),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, .production_id = 17),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, .production_id = 17),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(221),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(147),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(160),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(229),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, .production_id = 43),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, .production_id = 43),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(234),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(103),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(196),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, .production_id = 45),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, .production_id = 45),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(317),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 58),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 58),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(200),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(231),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, .production_id = 11),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 49),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 49),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, .production_id = 57),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, .production_id = 57),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 14),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(214),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(187),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(185),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, .production_id = 39),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, .production_id = 39),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(219),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(168),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 14),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, .production_id = 40),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, .production_id = 23),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, .production_id = 23),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(213),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(216),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 14),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(316),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(258),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 14),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 29),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 29),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(272),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(226),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, .production_id = 9),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, .production_id = 10),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, .production_id = 10),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(366),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(325),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(193),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, .production_id = 40),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(232),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(224),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(239),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(248),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 13),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(109),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(230),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(165),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(166),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(167),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 62),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 62),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(206),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(209),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(206),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 42),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 42),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(256),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(267),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(358),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, .production_id = 37),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 44),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 44),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, .production_id = 10),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, .production_id = 10),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 51),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 51),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 34),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 34),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, .production_id = 63),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, .production_id = 63),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, .production_id = 59),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(120),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, .production_id = 38),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, .production_id = 16),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, .production_id = 16),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1, .production_id = 47),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1, .production_id = 47),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(155),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(188),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 52),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 52),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, .production_id = 2),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 31),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 31),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, .production_id = 36),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, .production_id = 35),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, .production_id = 36),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, .production_id = 12),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 18),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, .production_id = 2),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 46),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 46),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, .production_id = 35),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 21),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 20),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, .production_id = 15),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 54),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2, .production_id = 32),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, .production_id = 7),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, .production_id = 16),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, .production_id = 19),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 41),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, .production_id = 22),
  [1016] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, .production_id = 24),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, .production_id = 25),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 55),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 53),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 56),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, .production_id = 25),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, .production_id = 26),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, .production_id = 27),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, .production_id = 28),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 60),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, .production_id = 8),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, .production_id = 7),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
